#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	for (i = size; i >= 0; i--)
	{
		j = 1;
		while (j <= i - 1)
		{
			_putchar(' ');
			j++;
		}
		_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
