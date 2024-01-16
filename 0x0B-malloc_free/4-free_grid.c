#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free up ed array
 * @grid: pointer to pointer to array
 * @height: int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
