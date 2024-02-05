#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first node in the list
 * Return: the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	int cpy;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	cpy = tmp->n;
	free(tmp);
	return (cpy);
}
