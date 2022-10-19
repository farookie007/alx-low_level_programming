#include "main.h"
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
