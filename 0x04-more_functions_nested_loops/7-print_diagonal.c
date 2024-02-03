#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 * should be printed
 */

void print_diagonal(int n)
{
	int l, space;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (space = 0; space <l ; space++)
				putchar(' ');

			putchar('\\');
			if (l == (n - 1))
				continue;
			putchar('\n');
		}
	}
	putchar('\n');
}
