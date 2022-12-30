#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	/* while the is not ended i.e the next element is not NULL*/
	while (h)
	{
		/* incrementing the number of nodes */
		len++;
		/* assigning the next node to h */
		h = h->next;
	}

	/* returning the number of nodes */
	return (len);
}
