#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *	only using _putchar
 *
 * Return: alway 0 (success)
 */
void print_numbers(void)
{
	int N = 0;

	do {
		_putchar(N + 48);
		N++;
	} while (N >= 0 && N <= 9);
	_putchar('\n');
}
