#include "main.h"

/**
 * *_strncat - function that concatenates 2 strings
 * @dest: string to be appended to
 * @src: string to be appended to dest
 * @n: bytes from src
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}

