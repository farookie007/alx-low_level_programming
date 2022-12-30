#include <stdio.h>
#include "lists.h"

int main(void)
{
	list_t head = {"Best", 4, 0};
	list_t middle = {NULL, 0, 0};
	list_t tail = {"School", 6, 0};
	size_t n;

	head.next = &middle;
	middle.next = &tail;
	
	n = print_list(&head);
	printf("-> %lu elements\n", n);

	return (0);
}
