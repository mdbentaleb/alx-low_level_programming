#include "main.h"

/**
 * word_separator - function that checks separators
 * @c: character
 * Return: int
 */

int word_separator(char c)
{
	int i = 0;
	char sprtr[] = " \t\n,;.!?\"(){}";

	while (sprtr[i] != '\0')
	{
		if (c == sprtr[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string -  function that capitalizes all words of a string.
 * @str: pointer to string
 * Return: pointer to string
 */

char *cap_string(char *str)
{
	int i;

<<<<<<< HEAD
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 0;
=======
>>>>>>> f058414cbd29f865f85cd32e901ecf34b4a4e789
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && word_separator(str[i - 1]) == 1)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

