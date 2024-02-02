#include "lists.h"

/**
 * ft_strlen - calculates length os string
 * @str: input string
 *
 * Return: string length
 */

int ft_strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
* add_node - a function that adds a new node
*	at the beginning of a list_t list.
* @head: Pointer to pointer to linked list
* @str: string
*
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!head || !new)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		new->len = ft_strlen(new->str);
	}

	new->next = *head;
	*head = new;
	return (*head);
}

