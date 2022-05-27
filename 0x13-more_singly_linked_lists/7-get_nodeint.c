#include "lists.h"

/**
 * *get_nodeint_at_index - function that return nth node
 * of linked list
 * @head: pointer to head
 * @index: index of node
 * Return: nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}

