#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to beginning of linked list
 * Return: void
 */

void free_dlistint(dlistint__t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head ->next;
		free(head);
		head = next;
	}
}

