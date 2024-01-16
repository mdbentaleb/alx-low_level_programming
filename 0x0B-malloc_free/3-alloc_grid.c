#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - eturns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **table;

	if (width == 0 || height == 0)
		return (NULL);

	table = malloc(height * sizeof(*table));
	if (table == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		table[i] = malloc(width * sizeof(**table));
		if (table[i] == NULL)
		{
			while (i >= 0)
			{
				free(table[i]);
				i--;
			}
			free(table);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			table[i][j] = 0;
			j++;
		}
		i++;
	}
	return (0);
}

