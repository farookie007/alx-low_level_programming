#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: the table
 */
void times_table(void)
{
	int x, y, mul;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			mul = x * y;
			if (mul > 9)
			{
				_putchar('0' + mul / 10);
				_putchar('0' + mul % 10);
			} else
			{
				_putchar(' ');
				_putchar('0' + mul);
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			} else
			{
				_putchar('\n');
			}
		}
	}
}
