#include "main.h"

/**
 * _isupper - check if c is  uppercase
 *
 * @c: input for alphabet
 *
 * Return: 1 if it's  uppercase. o if it's not.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
