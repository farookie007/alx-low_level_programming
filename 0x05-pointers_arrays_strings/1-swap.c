#include "main.h"

/**
 * swap_int - Swaps the values of two integer variables
 * @a: the first variable
 * @b: the second variable
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *c = a;
	*a = *b;
	*b = *c;
}
