#include "main.h"
/**
 * more_numbers - print 10 times the numbers
 * @n: character
 * Return: 0
 */
void more_numbers(void)
{
	int n;

	while (n <= 14)
	{
		_putchar("%d", n * 10);
		n++;
	}
}
