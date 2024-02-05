#include "lists.h"

/**
 * sum_listint - adds the intergers contained in a list
 * @head: pointer to the first node in the list
 * Return: sum of the elements
 */

int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *tmp = head;

	if (head == NULL)
		return (0);
	while (tmp)
	{
		s += tmp->n;
		tmp = tmp->next;
	}
	return (s);
}
