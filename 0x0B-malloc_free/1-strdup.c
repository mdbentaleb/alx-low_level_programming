#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates a duplicate string
 * @str: pointer to input string
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	int i;
	int len;
	char *nstr;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	nstr = malloc((len + 1) * sizeof(char));
	if (nstr == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		nstr[i] = str[i];
		i++;
	}

	return (nstr);
}

