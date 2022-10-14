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
	int a = 'a';

	for (i = a; i <= 'z'; i++)
		putchar(i);
	printf("\n");
	return (0);
}
