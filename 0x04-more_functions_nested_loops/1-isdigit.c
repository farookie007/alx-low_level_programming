#include "main.h"

/**
 * _isdigit - Checks if the argument is a digit
 * @c: the argument
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	c += '0';

	return (c >= '0' && c <= '9');
}
