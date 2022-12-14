#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *prev = (*head);

	new = (list_t *)malloc(sizeof(list_t *));
	/* if malloc fails */
	if (!new)
		return (NULL);

	/* initilaizing the new node's values */
	new->str = strdup(str);
	new->len = (unsigned int)strlen(str);
	new->next = NULL;

	/* if it is an empty list */
	if ((*head) == NULL)
	{
		(*head) = new;
		return (new);
	}

	/* traversing to the last element */
	while (prev->next)
	{
		prev = prev->next;
	}
	prev->next = new;

	return (new);
}

