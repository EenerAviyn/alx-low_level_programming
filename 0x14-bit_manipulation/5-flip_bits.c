#include "main.h"

/**
 * flip_bits - function that returns number of bits needed
 * @n: integer
 * @m: second integer that's flipped
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x > 0)
	{
		count++;
		x &= (x - 1);
	}
	return (count);
}

