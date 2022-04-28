#include "main.h"

/**
 * is_palindrome - function that return 1 if string is a palindrome 
 * return 0 if not
 * @s: pointer to string param
 * Return: recursion
 */

int is_palindrome(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - palindrome
 * @s: pointer to string
 * @l: position
 * Return: boolean
 */

int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	else if (*s == *(s + 1))
	{
		return (p1(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = strlen_recursion(s);

	return (p1(s, len - 1));
}

