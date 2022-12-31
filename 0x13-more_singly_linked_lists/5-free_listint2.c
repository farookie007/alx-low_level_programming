#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (!temp)
		return;

	free_listint(temp);
	/* assigning NULL to the new head */
	*head = NULL;
}

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;
	if (head->next)
		free_listint(head->next);
	free(head);
}
