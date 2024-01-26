#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: comma ","
 * @n: int
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	i = 0;

	va_start(list, n);
	while (i < n)
	{
		printf("%d", va_arg(list, int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(list);
	printf("\n");
}

