#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half of a string followed by a new line
 * @str: char array string type
 * Return: 0
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for(i /= 2; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

