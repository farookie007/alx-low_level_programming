#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp = n;
	int shifts;

	/* if n == 0 */
	if (n == 0)
	{
		putchar('0');
		return;
	}

	/* counting the number of shifts to be made */
	for (shifts = 0; (temp >>= 1) | 0; shifts++)
		;

	/* shifting through n at the known number of times */
	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
