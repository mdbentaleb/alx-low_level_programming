#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given
 *	as a parameter on each element of an array
 * @array: array
 * @size: array size
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		i = 0;
		while (array < size)
		{
			action(array[i]);
			i++;
		}
	}
}

