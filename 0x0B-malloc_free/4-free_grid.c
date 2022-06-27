#include "main.h"
#include <stdlib.h>

/**
 * free_grid - feeeup memory
 * @grid: grid pointer input
 * @height: number of rows the pointer have
 * Return: void
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
