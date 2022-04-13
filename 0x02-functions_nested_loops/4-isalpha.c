#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c : character to check
 * Return: 1 if a is a letter or 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
