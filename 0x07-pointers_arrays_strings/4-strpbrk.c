#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: pointer to string
 * @accept: pointer to string
 * Return: pointer or 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *pt;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				pt = &s[i];
				return (pt);
			}
			j++;
		}
		i++;
	}
	return (0);
}

