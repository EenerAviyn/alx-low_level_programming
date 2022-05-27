#include "lists.h"

/**
 * sum_listint - function that returns sum of all data (n)
 * of linked list
 * @head: pointer to head
 * Return: sum or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

