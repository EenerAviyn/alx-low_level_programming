#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	unsigned int k = 0;

	for (; *(s + k) != '\0'; k++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}

