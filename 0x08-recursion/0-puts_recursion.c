#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function that printsa string followed
 * by a new line
 * @s: string
 * Return: No
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}

