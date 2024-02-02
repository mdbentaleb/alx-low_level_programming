#include "lists.h"

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
		printf("[%u] %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
		count++;
	}
	return (count);
}

