#include "main.h"
/**
 * int _islower(int c) - Entry point
 *
 * Description: check for lower case letters
 *
 * _islower - check for lower case letters
 *
 * @c: character to check letter case
 *
 * Return: 1 (if lowercase) or 0 (otherwise)
 */
int _islower(int c)
{
	return (c >= 97 && c <= 122);
}
