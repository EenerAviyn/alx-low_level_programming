#include "main.h"
/**
 * more_numbers - print 10 times the numbers
 * Return: 0
 */
void more_numbers(void)
{
	char i;
	int k;
	int f;
	int l;
	
	for (i = '0'; i <= '9'; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			f = k / 10;
			l = k % 10;
			if (k >= 10)
				_putchar(f + '0');
			if (k == 10)
				l = 0;
			_putchar(l + '0');
		}
		_putchar('\n');
	}
}
