#include "lists.h"
#include <stdlib.h>

/**
 * *add_dnodeint_end - adds new node at start of linked list
 * @head: double pointer to start of linked list
 * @n: value to add to new node
 * Return: pointer to new node or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
