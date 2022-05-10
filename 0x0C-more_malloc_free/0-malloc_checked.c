#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function to allocate memory using malloc
 * @b: integer
 * Return: pointer to allocated memory or 98
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

