#include "main.h"

/**
 * clear_bit - a function that sets the valu
 *	of a bit to 0 at a given index.
 * @n: pointer to int
 * @index: int
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}

