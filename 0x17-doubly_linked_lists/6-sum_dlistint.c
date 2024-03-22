#include "lists.h"


/**
 * sum_dlistint - returns the sum
 * @head: double pointer
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{

	int totale = 0;
	dlistint_t *j;

	for (j = head; j != NULL; j = j->next)
	{
		totale += j->n;
	}

	return (totale);
}
