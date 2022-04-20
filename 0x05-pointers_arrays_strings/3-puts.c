#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string followed by a new line
 * @str: string
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

