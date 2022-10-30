#include "main.h"
#include <stdio.h>
/**
 * print_array - The function
 * @a: first argument
 * @n: number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1 && n - 1 > 0; i++)
	{
		printf("%d", *(a + i));/* prints the ith element of the array a */
		if (i == n - 1)
		{
			printf("\n");
			return;
		}
		else
		{
			printf(", ");
		}
	}
}
