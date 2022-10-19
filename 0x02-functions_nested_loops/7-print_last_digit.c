#include "main.h"
/**
 * print_last_digit - Prints the last digit of the parameter
 * @n: the parameter to be evaluated
 *
 * Return: the last digit of `n`
 */

int print_last_digit(int n)
{
	int rem = (n % 10);
	_putchar(48 + rem);
	return rem;
}
