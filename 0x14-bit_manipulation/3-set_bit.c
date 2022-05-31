#include "main.h"

/**
 * set_bit - function that sets value of bit to 1
 * at a given index
 * @n: integer
 * @index: index
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32 * 8 || !n)
		return (-1);
	*n |= 1UL << index;
	return (1);
}

