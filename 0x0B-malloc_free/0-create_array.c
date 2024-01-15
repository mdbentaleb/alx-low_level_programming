#include "main.h"

/**
 * create_array - creates an array of chars,
 *	and initializes it with a specific char.
 * @size: int
 * @c: char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *s = malloc(size);

	if (size == 0 || s == NULL)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

