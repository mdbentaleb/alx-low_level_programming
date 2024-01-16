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
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
