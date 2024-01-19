#include "main.h"

/**
 * _memset - fills memory
 * @s: pointer to input string
 * @b: char
 * @n: int
 * Return: pointer to string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}


/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: int
 * @size: int
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pt;

	if (size == 0 || nmemb == 0)
		return (NULL);

	pt = malloc(size * nmemb);

	if (pt == NULL)
		return (NULL);

	-memset(pt, 0, nmemb * size);

	return (pt);
}

