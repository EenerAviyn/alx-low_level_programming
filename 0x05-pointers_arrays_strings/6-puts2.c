#include "main.h"
#include <stdio.h>

/**
 * puts2 - funtion that prints every other character of a string
 * start with first character then new line
 * @str: input string
 * Return: no return
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			putchar('\n');
			break;
		}
		if (count % 2 == 0)
			putchar(str[count]);
		count++;
	}
}

