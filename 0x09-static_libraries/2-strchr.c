#include "main.h"

/**
 * *_strchr - function that searches for first occurrence of
 * character c in string pointed to
 * @s: string
 * @c: character
 * Return: pointer to first occurrence of character c
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}

