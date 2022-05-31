#include "main.h"

/**
 * print_binary - function that prints binary representation
 * of number
 * @n: number to print in binary
 * Return: No return
 */

int binary_to_uint
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if(current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

