#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free up the memory of a 2d array
 * @grid: target memory to free
 * @height: size of array.
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
