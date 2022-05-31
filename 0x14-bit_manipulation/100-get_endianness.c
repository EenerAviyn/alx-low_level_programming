#include "main.h"

/**
 * get_endianness - function that chaecks the endianness
 * Return: 0 or 1
 */

int get_endianness(void)
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

