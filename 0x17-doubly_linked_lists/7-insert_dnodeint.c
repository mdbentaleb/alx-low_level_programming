#include "lists.h"


/**
 * insert_dnodeint_at_index - Add node
 * @h: Head of node
 * @idx: int
 * @n: int
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t));
	dlistint_t *crnt;
	unsigned int c = 0;

	if (h == NULL || n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->next = NULL;
	n_node->prev = NULL;
	crnt = *h;

	if (idx == 0)
	{
		n_node = add_dnodeint(h, n);
		return (n_node);
	}
	while (crnt)
	{
		if (crnt->next == NULL && c == idx - 1)
		{
			n_node = add_dnodeint_end(h, n);
			return (n_node);
		}
		else if ((idx - 1) == c)
		{
			n_node->next = crnt->next;
			n_node->prev = crnt;
			crnt->next->prev = n_node;
			crnt->next = n_node;
			return (n_node);
		}
		c++;
		crnt = crnt->next;
	}
	free(n_node);
	return (NULL);
}
