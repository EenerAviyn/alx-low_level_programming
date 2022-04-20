#include <stdio.h>

/**
 * main - calculate the prime factor of 612852475143
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long int x = 612852475143;
	long int py;

	for (py = 2; py < x; py++)
	{
		if (x % py == 0)
		{
			x = x / py;
		}
	}
	printf("%ld\n", py);
	return (0);
}
