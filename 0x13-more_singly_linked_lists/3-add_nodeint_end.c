#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of the list
 *  @head: pointer to the start of the list
 *  @n: new pointer
 *  Return: pointer to the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *nw;

	tmp = *head;
	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	if (*head == NULL)
	{
		*head = nw;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = nw;
	return (nw);
}
