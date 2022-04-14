#include <stdio.h>

/**
 * main - entry point
 * Fizz-Buzz test - print1 to 100 then new line
 * print Fizz for multiples of 3 and Buzz for multiples of 5
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else
			printf("%d ", i);
	}
	printf("Buzz");
	printf('\n');
	return (0);
}
