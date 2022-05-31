#include "main.h"

/**
 * get_bit - function that returns value of bit at
 * given index
 * @index: index
 * @n: integer
 * Return: value of bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);
	bit_value = (n >> index) & 1;

	return (bit_value);
}

