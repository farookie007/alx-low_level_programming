#include "main.h"
/**
 * print_sign - Checks if `n` is a positive interger;
 * @n: parameter to be checked
 *
 * Return: 0 if n is zero
 * 1 if n is greater than zero
 * -1 if n is leass than zero
 */
int print_sign(int n)
{
	if (n != 0)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
