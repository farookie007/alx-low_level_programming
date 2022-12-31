#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	/* if malloc fails */
	if (!new)
		return (NULL);

	/* initilaizing the new node's values */
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	/* assigning the new head to address of the new node */
	*head = new;

	return (*head);
}

