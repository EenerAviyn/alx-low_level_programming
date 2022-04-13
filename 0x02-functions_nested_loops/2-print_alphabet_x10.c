#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: print alphabet ten times
 *
 * Return: void
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
void print_alphabet_x10(void)
{
	int j = 0;
	while (j <= 10)
	{
		char i = 'a';
		while (i < 'z')
		{
			putchar(i);
			i++;
		}
		j++;
	}			
