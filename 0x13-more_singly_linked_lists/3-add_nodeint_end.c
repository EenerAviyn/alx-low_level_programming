#include "lists.h"

/**
 * *add_nodeint_end - function that adds new node at end
 * of list
 * @head: pointer ro pointer of head node
 * @n: value in node
 * Return: address of new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new_end = malloc(sizeof(listint_t));

	if (!new_end)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;
	if (!*head)
		*head = new_end;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_end;
	}
	return (new_end);
}

