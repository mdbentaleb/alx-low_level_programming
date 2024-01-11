#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the chracter to print
 * Return : void
 */

void _putchar(char c)
{
	return (write(1, &c, 1));
}

