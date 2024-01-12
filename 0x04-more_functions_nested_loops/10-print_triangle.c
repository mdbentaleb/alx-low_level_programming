#include "main.h"

/**
 * print_triangle - prints a trianlge
 *
 * @size: size of the triangle
 *
 * return: always 0
 */
void print_triangle(int size)
{
	int hght, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hght = 1; hght <= size; hght++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((hght + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
