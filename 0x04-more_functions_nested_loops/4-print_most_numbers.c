#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 *      without 2 and 4
 *      only using _putchar
 *
 * Return: alway 0 (success)
 */
void print_most_numbers(void)
{
	int N;

	for (N = 0; N <= 9; N++)
	{
		if (N == 2 || N == 4)
			continue;
		_putchar(N + 48);
	}
	_putchar('\n');
}
