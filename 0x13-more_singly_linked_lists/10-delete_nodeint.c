#include "lists.h"

/**
 * delete_nodeint_at_index -deletes a node
 * @head: pointer to the first node
 * @idx: index to the first node
 * Return: 1 if success, - 1 if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *tmp, *temp_addr;
	unsigned int cnt;

	tmp = *head;
	cnt = 0;
	while (tmp)
	{
		if (cnt == (idx - 1))
		{
			temp_addr = (tmp->next)->next;
			free(tmp->next);
			tmp->next = temp_addr;
			return (1);
		}
		else if (idx == 0)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
			return (1);
		}
		cnt++;
		tmp = tmp->next;
	}
	return (-1);
}
