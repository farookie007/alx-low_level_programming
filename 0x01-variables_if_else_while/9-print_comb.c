#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i == '9' ? putchar('\n') : putchar(',');
		putchar(' ');

		i++;
	}
	return (0);
}
