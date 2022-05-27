#include "lists.h"

/**
 * pop_listint - function that deletes head node of
 * linked list
 * @head: pointer to pointer to head
 * Return: head's node data(n) or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int deleted = 0;

	if (!(*head))
		return (deleted);
	temp = *head;
	deleted = temp->n;
	*head = (*head)->next;
	free(temp);
	return (deleted);
}

