#include "lists.h"

/**
 * *insert_nodeint_at_index - function that inserts new
 * node at given position
 * @head: pointer to pointer to head
 * @idx: index where new node should be added
 * @n: value in node
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *temp = *head, *new_node = malloc(sizeof(listint_t));

	while (temp && (count < idx - 1))
	{
		temp = temp->next;
		count++;
	}

	if (new_node)
	{
		new_node-> = n;
		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		if (count + 1 == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
	}

	free(new_node);
	return (NULL);
}

