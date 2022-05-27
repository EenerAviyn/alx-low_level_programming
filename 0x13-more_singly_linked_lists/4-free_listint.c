#include "lists.h"

/**
 * free_listint - function that frees list
 * @head: pointer to head
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

