#include "lists.h"

/**
 * free_listint2 - function that frees list
 * @head: pointer to pointer to head
 * Return: set head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}

