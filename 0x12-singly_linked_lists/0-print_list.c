#include "lists.h"
#include <stdio.h>


/* print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * 
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	/* while the is not ended i.e the next element is not NULL*/
	while (h)
	{
		/* if the str is not NULL*/
		if (h->str)
			printf("[%u] %s", h->len, h->str);
		else
			printf("[0] (nil)");
		printf("\n");

		/* incrementing the number of nodes */
		n++;
		/* assigning h to the next node */
		h = h->next;
	}

	/* returning the number of nodes */
	return (n);
}
