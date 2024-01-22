#include "main.h"

/**
 * _isdigit - checks if c is a number from 0 to 9
 *
 * @c: input
 *
 * Return: 1 if is a digit.0 if not.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
