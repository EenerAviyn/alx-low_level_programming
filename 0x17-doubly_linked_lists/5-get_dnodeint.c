#include "lists.h"
#include <stdlib.h>

/**
 * *get_dnodeint_at_index - function that returns nth node
 * of dlistint_t linked list
 * @index: index of node
 * @head: pointer to start of linked list
 * Return: nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return NULL;
		head = head->next;
	}
	return (head);
}
