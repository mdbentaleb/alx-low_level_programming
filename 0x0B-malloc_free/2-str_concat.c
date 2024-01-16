#include "main.h"
#include <stdlib.h>

/**
 * ft_strlen - calculates the length of the string
 * @str: pointer to input string
 * Return: int
 */

int ft_strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * str_concat - concatenates two strings.
 * @s1: pointer to first input string
 * @s2: pointer to second input string
 * Return: pointer to string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1 = ft_strlen(s1);
	int len2 = ft_strlen(s2);
	char *nstr;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	nstr = malloc((len1 + len2 + 1) * sizeof(char));
	if (nstr == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		nstr[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}

	nstr[i] = '\0';

	return (nstr);
}

