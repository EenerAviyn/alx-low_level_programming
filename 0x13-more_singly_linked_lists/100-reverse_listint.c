#include "lists.h"

/**
 * *reverse_listint - function that reverses linked list
 * @head: pointer to pointer to head
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *agead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);
	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}
	(*head)->next = behind;
	return (*head);
}

