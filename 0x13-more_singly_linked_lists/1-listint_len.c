#include "lists.h"

/**
 *listint_len - returns the number of elements in
 *a linked list
 *@h: pointer to the first element
 *Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
