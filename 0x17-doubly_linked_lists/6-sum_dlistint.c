#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - function that returns sum of all data
 * of dlistint_t linked list
 * @head: pointer to start of linked list
 * Return: sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

