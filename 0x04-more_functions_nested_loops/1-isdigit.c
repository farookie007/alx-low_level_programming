#include "main.h"

/**
 * _isdigit - Checks if the argument is a digit
 * @c: the argument
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	return (('0' <= c) && (c <= '9'));
}
