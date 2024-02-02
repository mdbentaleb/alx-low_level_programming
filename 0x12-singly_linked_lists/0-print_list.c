#include "lists.h"

/**
 * ft_strlen - calculates length of strings
 * @str: input string
 *
 * Return: int
 */

int ft_strlen(char *str)
{
	int len = 0;

	while (str[i] != NULL)
	{
		len++;
	}
	return (len);
}

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: pointer to linked list "first none"
 *
 * Return: size
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", ft_strlen(h->len), h->str);
			h = h->next;
			count++;
		}
	}
	return (count);
}

