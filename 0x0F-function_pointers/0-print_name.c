#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name- function that prints a name
 * @name: name
 * @f: function pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return ;
	else
		f(name);
}
