#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, space, hash;

	hash = 1;
	space = size - 1;
	for (; hash <= size; hash++, space--)
	{
		/* prints the required number of spaces */
		i = space;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		/* prints the required number of hashes */
		i = hash;
		while (i > 0)
		{
			_putchar('#');
			i--;
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
