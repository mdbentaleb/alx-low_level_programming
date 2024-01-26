#include "variadic_functions.h"

/**
 * print_strings -  a function that prints strings, followed by a new line.
 * @separator: comma ","
 * @n: int
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list str_list;

	i = 0;
	while (i < n)
	{
		str = va_arg(str_list, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");

	va_end(str_list);
}

