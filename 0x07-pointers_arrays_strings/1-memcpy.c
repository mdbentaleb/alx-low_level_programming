#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: pointer to string
 * @src: pointer to string
 * @n: int
 * Return: pointer to string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

