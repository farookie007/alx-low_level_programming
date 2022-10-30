#include "main.h"


/**
 * print_line - prints a straight line
 * @n: the length of the line
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
