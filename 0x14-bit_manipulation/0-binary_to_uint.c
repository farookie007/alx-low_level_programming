#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b) - 1;
	unsigned int power;
	unsigned int total = 0;

	/* if b is NULL */
	if (b == NULL)
		return (0);

	/* converting the binary number to decimal */
	for (power = 0, len; b[power]; len--, power++)
	{
		/* checking if the element is either 1 or 0 */
		if ((b[len] != '0') && (b[len] != '1'))
			return (0);

		/* coverting to decimal by raising the power */
		if (b[len] == '1')
			total += 2**power
	}

	return (total);
}
