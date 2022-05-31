#include "main.h"

/**
 * clear_bit - function that sets value of bit to 0
 * at given index
 * @n: integer
 * @index: index
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 8 * 32 || !n)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

