#include "hash_tables.h"

/**
 * print_ht - prints hash table state
 * @ht: pointer to hash table
 * Return: void
 */

void print_ht(shash_table_t *ht)
{
	printf("SHEAD: [%s]:[%s]\n", ht->shead->key, ht->shead->value);
	printf("STAIL: [%s]:[%s]\n", ht->stail->key, ht->stail->value);
}

/**
 * shash_table_create - creates hash table
 * @size: size of hash table
 * Return: pointer to hash table type
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	if (!size)
		return (NULL);

	ht = calloc(1, sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}

/**
 * new_snode - allocates new node with checking
 * @key: string key
 * @value: string value
 * Return: node or NULL
 */

shash_node_t *new_snode(const char *key, const char *value)
{
	shash_node_t *node;

	node = calloc(1, sizeof(shash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (0);
	}

	return (node);
}

/**
 * shash_table_sort - sorts new node
 * @ht: pointer to hash table
 * @snode: poinder to node to sort
 */

void shash_table_sort(shash_table_t *ht, shash_node_t *snode)
{
	shash_node_t *shead;

	if (!ht)
		return;

	shead = ht->shead;
	if (!shead || strcmp(snode->key, shead->key) < 0)
	{
		snode->snext = shead;
		ht->shead = snode;
		if (shead)
			shead->sprev = snode;
		else
			ht->stail = snode;
		return;
	}
	while (shead->snext && strcmp(snode->key, shead->snext->key) >= 0)
		shead = shead->snext;

	snode->sprev = shead;
	snode->snext = shead->snext;
	if (shead->snext)
		shead->snext->sprev = snode;
	else
		ht->stail = snode;
	shead->snext = snode;
}

/**
 * shash_table_set - adds element to shash table
 * @ht: pointer to shash table
 * @key: string key
 * @value: string value
 * Return: 1 on success, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node = NULL, *head;
	unsigned long int index;

	if (!ht || !key || !*key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	while (head)
	{
		if (!strcmp(key, head->key))
		{
			char *_value = strdup(value);

			if (!_value)
				return (0);
			free(head->value);
			head->value = _value;
			return (1);
		}
		head = head->next;
	}
	node = new_snode(key, value);
	if (!node)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	shash_table_sort(ht, node);
	return (1);
}

/**
 * shash_table_get - gets element from hash table
 * @ht: pointer to hash table
 * @key: string key
 * Return: string value or NULL
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (!ht || !key || !*key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints elements of hash table
 * @ht: pointer to hash table
 * Return: void
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *snode;
	size_t printed = 0;

	if (!ht)
		return;

	printf("{");
	snode = ht->shead;
	while (snode)
	{
		if (printed)
			printf(", ");
		printf("'%s': '%s'", snode->key, snode->value);
		printed++;
		snode = snode->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints elements of hash table in reverse
 * @ht: pointer to hash table
 * Return: void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *snode;
	size_t printed = 0;

	if (!ht)
		return;

	printf("{");
	snode = ht->stail;
	while (snode)
	{
		if (printed)
			printf(", ");
		printf("'%s': '%s'", snode->key, snode->value);
		printed++;
		snode = snode->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes hash table
 * @ht: pointer to hash table
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long i = 0;
	shash_node_t *node, *temp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
