#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *prev, *new;

	new = (listint_t *)malloc(sizeof(listint_t *));
	/* if malloc fails */
	if (!new)
		return (NULL);

	/* initializing the new node with its data */
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;

		return (new);
	}
	prev = *head;

	for (i = 1; i < idx && prev; i++)
	{
		prev = prev->next;
	}

	/* inserting the node only if the temp node is valid */
	if (prev)
	{
		new->next = prev->next;
		prev->next = new;
	}
	return (prev ? new : NULL);
}
