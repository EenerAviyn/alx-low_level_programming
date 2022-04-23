#include "main.h"
#include <stdio.h>

/**
 * print_buffer - funtion that prints a buffer
 * @b: buffer
 * @size: size of buffer
 * Return: no return
 */

void print_buffer(char *b, int size)
{
	int m, n, p;
	if (size <= 0)
		printf("\n");
	else
	{
		for (m = 0; m < size; m += 10)
		{
			printf("%.8x:", j);
			for(n = m; n < m + 10; n++)
			{
				if (k % 2 == 0)
					printf(" ");
				if (k < size)
					printf("%.2x", *(b + n));
				else
					printf("  ");

