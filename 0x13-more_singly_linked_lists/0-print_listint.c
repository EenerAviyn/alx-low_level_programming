#include "lists.h"

/**
 * print_listint - function that prints elements of list
 * @h: pointer to head of list
 * Return: number of nodes in linked list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	unsigned int count = 0;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
