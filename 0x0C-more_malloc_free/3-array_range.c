#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (int i = 0; i < max - min + 1; i++)
		arr[i] = min++;

	return (arr);
}

