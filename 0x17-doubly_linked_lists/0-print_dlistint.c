#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all the elements of list
 * @h: pointer to the start of the list
 * Return: int
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t j;

	for (j = 0; h != NULL; j++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (j);
}
