#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer to string
 * @b: char
 * @n: int
 * Return: pointer to sting
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;

	return (s);
}

