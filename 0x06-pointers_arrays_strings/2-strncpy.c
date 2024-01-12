#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: number of bytes to copy
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

