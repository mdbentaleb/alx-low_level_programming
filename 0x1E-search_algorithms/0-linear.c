#include "search_algos.h"

/**
 * linear_search - Searches a value in an array using a linear search.
 * @array: array
 * @size: length
 * @value: value
 * Return: int
 */

int linear_search(int *array, size_t size, int value)
{
	size_t j;

	for (j = 0; (j < size) && (array); j++)
	{
		if (*(array + j) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)j, *(array + j));
			return (j);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)j, *(array + j));
		}
	}
	return (-1);
}
