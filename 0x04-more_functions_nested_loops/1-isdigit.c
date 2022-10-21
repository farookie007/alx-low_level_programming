#include "main.h"

/**
 * _isdigit - Checks if the argument is a digit
 * @c: the argument
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	int n = c + '0';

	return (('0' <= n) && (n <= '9'));
}
