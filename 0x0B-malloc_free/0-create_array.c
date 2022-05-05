#include "main.h"

/**
 * *create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: array size
 * @c: stored char
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *cr;
	insigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}

