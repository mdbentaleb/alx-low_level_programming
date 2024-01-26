#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: int
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int res = 0;
	va_list sum;

	va_start(sum, n);

	for (i = 0; i < n; i++)
		res += va_arg(sum, int);

	va_end(sum);
	return (res);
}

