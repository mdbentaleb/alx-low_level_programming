#include "main.h"

/**
 * binary_to_uint - a function that converts
 *	a binary number to an unsigned int
 * @b: pointer to input string
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int nbr = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		nbr = nbr * 2 + (*b++ - '0');
	}
	return (nbr);
}

