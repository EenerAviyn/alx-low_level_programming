#include "lists.h"
#include "stdio.h"

/**
 * print_listint - function that prints elements of list
 * @h: pointer to head of list
 * Return: number of nodes in linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
