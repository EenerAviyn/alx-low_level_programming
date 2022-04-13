#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: print alphabet ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int j = 0;
	char i;

	while (j < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
