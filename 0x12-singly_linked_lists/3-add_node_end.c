#include "main.h"

/**
 * *add_node_end - function that adds new node to end of list
 * @head: first node
 * @str: string
 * Return: address of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new = malloc(sizeof(list_t))
