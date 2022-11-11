#include "main.h"

/**
 * print_number - prints an integer number
 * @n: the number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	_print(n);
	_putchar('\n');
}

/**
 * _print - prints an integer recursively using _putchar function
 * @n: the integer to be printed
 *
 * Return: void
 */
void _print(int n)
{
	int rem;

	if (n == 0)
		return;
	rem = n % 10;
	n /= 10;
	_print(n);
	_putchar('0' + rem);
}
