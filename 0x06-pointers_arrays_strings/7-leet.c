#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string
 * Return: pointer to string
 */

char *leet(char *str)
{
	int i, j, x;
	char letter[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		x = 0;
		while (letter[j] != '\0')
		{
			if (str[i] == letter[j])
			{
				x = j;
				str[i] = replace[x];
			}
			j++;
		}
		i++;
	}
	return (str);
}

