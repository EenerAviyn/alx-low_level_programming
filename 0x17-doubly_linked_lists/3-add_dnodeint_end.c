#include "lists.h"
#include <stdlib.h>

/**
 * *add_dnodeint_end - adds new node to end of linked list
 * @head: double pointer to beginning of linked list
 * @n: value to add to new node
 * Return: pointer to newnode or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	if (head == NULL)
		return NULL;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return new;
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;
	return new;
}

