#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while(h)
	{
		/* if the string part is NULL */
		if (!h->str)
			printf("[0] (nil)");
		else
			printf("[%u] %s", h->len, h->str);
		/* assigning h to be the next node */
		h = h->next;
		nodes++;
	}
	return (nodes);
}
