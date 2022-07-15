#include "main.h"

/**
*_isupper - function that verifies if character is uppercase or not
*@c: tested character
*Return: returns 1 or 0
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
