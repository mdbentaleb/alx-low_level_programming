#include "main.h"

/**
 * _strcmp -  function that compares two strings.
 * @s1: pointer to first srting
 * @s2: pointer to second string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				return (0);
			}
			else if (s1[i] >= s2[j] || s1[i] <= s2[j])
				return (s1[i] - s2[j]);
			j++;
		}
		i++;
	}
}

