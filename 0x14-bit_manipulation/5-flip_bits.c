#include "main.h"

/**
 * flip_bits - Returns the number of bits that must be flipped
 *	to convert one number to another
 * @n: int
 * @m: int
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xrv = n ^ m;
	unsigned int cnt = 0;

	while (xrv)
	{
		if (xrv & 1ul)
			cnt++;
		xrv = xrv >> 1;
	}
	return (cnt);
}

