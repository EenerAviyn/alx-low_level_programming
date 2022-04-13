#include "main.h"
/**
 * int _islower(int c) - Entry point
 *
 * Description: check for lower case letters
 *
 * Return: 1 (if lowercase) or 0 (otherwise)
 */
int _islower(int c)
{
	char c = 'a';
	while (c <= 'z')
	{
		if (c.islower == true)
		{
			return (1);
		}
		else 
			return (0);
	c++;
	}
}
