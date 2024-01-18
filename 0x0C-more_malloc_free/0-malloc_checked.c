#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: int
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *pt = malloc(b);

	if (pt == NULL)
		exit(98);
	return (pt);
}

