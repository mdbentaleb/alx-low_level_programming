#include "lists.h"


/**
 * get_dnodeint_at_index - returns the nth node.
 * @head: double pointer
 * @index: index of the node
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *crnt;
	unsigned int j;

	crnt = head;
	j = 0;
	while (crnt != NULL)
	{
		if (j == index)
			return (crnt);
		crnt = crnt->next;
		j++;
	}
	return (NULL);
}
