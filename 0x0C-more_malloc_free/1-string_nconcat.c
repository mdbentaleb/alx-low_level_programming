#include "main.h"

/**
 * ft_strlen - calculates string length
 * @str: input string
 * Return: int
 */

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: strring
 * @s2: string
 * @n: int
 * Return: pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, len1, len2, j;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n > len2)
		str = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		str =  malloc(sizeof(char) * (len1 + n + 1));

	if (str == NULL)
		return (NULL);


	i = 0;
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < n)
	{
		str[i] = s2[j];
		i++;
		j++;
	}

	str[i] = '\0';
	return (str);
}

