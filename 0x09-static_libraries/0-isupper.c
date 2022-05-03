#include "main.h"

/**
 * _is_upper - checks for uppercase characters
 * @c: character to be checked
 * Return: 1 if c is uppercase, 0 if lowercase
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
