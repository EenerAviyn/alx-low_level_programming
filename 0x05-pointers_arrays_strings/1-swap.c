#include "main.h"

/**
 * swap_int - function swaps the values of 2 integers
 * @a: character 1
 * @b: character 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

