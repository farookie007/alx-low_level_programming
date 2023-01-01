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
	listint_t *temp, *new;

	new = (listint_t *)malloc(listint_t *);
	/* if malloc fails */
	if (!new)
		return (NULL);

	/* initializing the new node with its data */
	new->n = n;
	
	while (temp && idx)
	{
		temp = temp->next;
		idx--;
	}

	/* inserting the node only if the temp node is valid */
	if (temp)
	{
		new->next = temp->next;
		temp->next = new;
	}
	return (temp ? new : NULL);
}
