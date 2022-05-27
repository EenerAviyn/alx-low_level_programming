#include "lists.h"

/**
 * print_listint - function prints elements of list
 * @h: pointer to head of list
 * Return: number of nodes in linked list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cntr = 0;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		cntr++;
		tp = tp->next;
	}
	return (cntr);
}
