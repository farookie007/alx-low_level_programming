#include "main.h"

/**
 * print_diagonal - prints diagonal line in the terminal
 * @n: number of rows spanned by the line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		j = 1;
		while (j <= i - 1)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
