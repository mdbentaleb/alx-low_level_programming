#include "lists.h"

/**
* list_len - a function that returns the number
*	of elements in a linked list_t list.
* @h: Pointer to first node
*
* Return: Number of elements
*/
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
