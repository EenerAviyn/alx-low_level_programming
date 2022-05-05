#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2-D grid
 * @grid: multidimensional array of integers
 * @height: height of grid
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}

