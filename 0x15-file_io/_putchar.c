#include "main.h"

/**
 * _putchar - writes the character C to stdout
 * @c: character to print
 * Return: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

