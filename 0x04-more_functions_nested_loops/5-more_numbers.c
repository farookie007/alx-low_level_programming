#include "main.h"

/**
 * more_numbers - prints more numbers
 *
 * Return: void
 */
void more_numbers(void)
{
	int x, y;

	for (y = 1; y <= 10; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			/* runs onky if x is a 2-digit variable */
			if (x > 9)
			{
				_putchar('0' + x / 10);
			}
			/* runs everytime */
			_putchar('0' + x % 10);
			if (x == 14)
				_putchar('\n');
		}

	}
}
