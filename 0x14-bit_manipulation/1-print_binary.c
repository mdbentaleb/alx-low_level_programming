#include "main.h"

/**
 * print_binary - a function that prints the binary
 *	representation of a number.
 * @n: int
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bt = sizeof(n) * 8;
	int prntd = 0;

	while (bt)
	{
		if (n & 1L  << --bt)
		{
			_putchar('1');
			prntd++;
		}
		else if (prntd)
			_putchar('0');
	}
	if (!prntd)
		_putchar('0');
}

