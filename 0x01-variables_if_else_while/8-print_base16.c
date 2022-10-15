#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char hex_values[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
		putchar(hex_values[i]);
	putchar('\n');
	return (0);
}
