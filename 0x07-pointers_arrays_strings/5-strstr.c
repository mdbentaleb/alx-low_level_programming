#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: pointer to string
 * @needle: pointer to string
 * Return: pointer to string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
	{
		return (0);
	}

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j]
				&& haystack[i + j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
		j = 0;
	}
	return (0);
}

