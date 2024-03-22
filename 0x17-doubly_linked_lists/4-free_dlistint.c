#include "lists.h"


/**
 * free_dlistint - frees a list.
 * @head: pointer to the head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ls;

	while (head)
	{
		ls = head;
		head = head->next;
		free(ls);
	}
}
