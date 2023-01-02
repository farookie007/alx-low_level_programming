#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int power;
	unsigned int total = 0;

	/* if b is NULL */
	if (b == NULL)
		return (0);

	/* converting the binary number to decimal */
	for (power = 0, len = strlen(b) - 1; b[power]; len--, power++)
	{
		/* checking if the element is either 1 or 0 */
		if ((b[len] != '0') && (b[len] != '1'))
			return (0);

		/* coverting to decimal by raising the power */
		if (b[len] == '1')
			total += _pow(2, power);
	}

	return (total);
}

/**
 * _pow - a function to calculate the result of `base` raised to a power
 * of `power` where both are +ve integers
 * @base: the base number
 * @power: its exponent
 *
 * Return: the result of the calculation
 */
unsigned int _pow(unsigned int base, unsigned int power)
{
	unsigned int total = base;

	/* if the power is 0 */
	if (power == 0)
		return (1);

	/* calculating the power */
	for (; power > 1; power--)
		total *= base;

	return (total);
}
