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

	for (i = 0; i < n; i++)
	{
		printf("%c", *(a + i));
		if (i == n - 1)
			printf("\n");
		else
			printf(", ");
	}
}
