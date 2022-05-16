#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given
 * as a parameter
 * @array: array
 * @size: size of array
 * @action: pointer to function to be used
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int));
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
