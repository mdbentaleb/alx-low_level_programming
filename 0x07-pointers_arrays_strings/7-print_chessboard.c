#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: 2d array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (; i < 8 i++)
	{
		for (; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
