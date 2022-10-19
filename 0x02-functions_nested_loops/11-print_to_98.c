#include "main.h"
/**
 * print_to_98 - Prints all natural number to 98
 * @n: the number to be counted from
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		_pnum(n);
		_putchar('\n');
		return;
	}
	for (; n <= 98; n++)
	{
		_pnum(n);
		if (n == 98)
		{
			_putchar('\n');
			return;
		}
		_putchar(' ');
	}
	for (; n >= 98; n--)
	{
		_pnum(n);
		if (n == 98)
		{
			_putchar('\n');
			return;
		}
		_putchar(' ');
	}
	_putchar('\n');
}
/**
 * _pnum - Prints a number
 * @n: the number
 *
 * Return: the number printed as characters
 */
void  _pnum(int n)
{
	_putchar('0' + n / 10);
	_putchar('0' + n % 10);
}
