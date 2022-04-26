#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: input pointer
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	insigned int c, m = 0;

	for (c = 0; c < 64; c++)
	{
		if (c % 8 == 0 && c != 0)
		{
			m = c;
			_putchar('\n');
		}
		_putchar(a[c / 8][c - m]);
	}
	_putchar('\n');
}

