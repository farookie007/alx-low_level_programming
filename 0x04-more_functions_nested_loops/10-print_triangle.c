#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int space, hash;

	hash = 1;
	space = size - 1;
	for (; hash <= size; hash++, space--)
	{
		/* prints the required number of spaces */
		while (space > 0)
		{
			_putchar(' ');
			space--;
		}
		/* prints the required number of hashes */
		while (hash > 0)
		{
			_putchar('#');
			hash--;
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
