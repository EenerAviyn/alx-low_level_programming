iinclude "main.h"
/**
 * print_to_98 - print all natural numbers
 * @n: start here
 * Return: 0 or 1
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}

	printf("98");
	_putchar('\n');
}
