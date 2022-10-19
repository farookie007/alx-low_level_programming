#include "main.h"
/**
 * print_times_table - prints the `n` times table
 * @n: the number to print to
 *
 * Return: the table
 */
void print_times_table(int n)
{
	int x, y;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			if (y == 0)
				_putchar('0');
			else
				_pnum(x * y);

			if (y < n)
			{
				_putchar(',');
				_putchar(' ');
			} else
			{
				_putchar('\n');
			}
		}
	}
}

/**
 * _pnum - Prints a number
 * @n: the number
 *
 * Return: the number printed as characters
 */
void  _pnum(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = _abs(n);
	}

	if (n > 99 && n < 1000)
	{
		_putchar('0' + n / 100);
		_putchar('0' + (n % 100) / 10);
		_putchar('0' + n % 10);
	} else if (n > 9 && n < 100)
	{
		_putchar(' ');
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	} else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + n % 10);
	}
}

/**
 * _abs - Return the absolute value of an integer
 * @n: parameter to be evaluated
 *
 * Return: a +ve integer value always
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
