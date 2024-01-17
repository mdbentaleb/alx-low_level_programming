#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: input string
 * Return: pointer to str
 */

char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		while ((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'm')
				|| (str[i] >= 'A' && str[i] <= 'M'))
			{
				str[i] += 13;
			}
			else
				str[i] -= 13;
			i++;
		}
		i++;
	}
	return (str);
}

