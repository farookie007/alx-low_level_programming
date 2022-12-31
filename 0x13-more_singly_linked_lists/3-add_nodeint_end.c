#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *prev = *head;

	new = (listint_t *)malloc(sizeof(listint_t *));
	/* if malloc fails */
	if (!new)
		return (NULL);

	/* if the list is an empty list */
	if (*head == NULL)
	{
		*head = new;
	}
	while (prev->next)
	{
		prev = prev->next;
	}
	new->n = n;
	new->next = NULL;
	prev->next = new;

	return (new);
}
