#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers up to 98
 * @n: start here
 * Return: 0 or 1
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	printf("98");
	putchar('\n');
}
