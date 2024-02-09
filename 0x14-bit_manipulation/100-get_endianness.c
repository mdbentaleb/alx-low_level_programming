#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * Return: int
 */

int get_endianness(void)
{
	unsigned long int nb = 1;

	return (*(char *)&nb);
}

