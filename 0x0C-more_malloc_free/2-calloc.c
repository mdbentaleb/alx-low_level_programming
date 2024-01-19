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
	char *pt = s

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (pt);
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

	pt = malloc(sizeof(int) * nmemb);

	if (pt == 0)
		return (NULL);

	-memset(pt, '0', nmemb * sizeof(int));

	return (pt);
}

