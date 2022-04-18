#include "main.h"

/**
 * print_line: - draw straight line on terminal
 * @n: number of times character should be printed
 * Return: 0
 */

void print_line(int n)
{
	int i;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
