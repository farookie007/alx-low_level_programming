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
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
		return;
	}
	for (; n <= 98; n++)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	for(; n >= 98; n--)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	_putchar('\n');
}
