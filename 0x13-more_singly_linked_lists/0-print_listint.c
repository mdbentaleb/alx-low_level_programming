#include "lists.h"

/**
 *print_listint - prints all elements of a list
 *@h: pointer to the first element
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		if (h->n == '\0')
			printf("[0] (nil)\n")
		else
			printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}

