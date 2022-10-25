#include "main.h"
#include <unistd.h>

/**
 * print_rev - prints a string in reverse followed by a neewline
 * @s: the string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (i >= 0)
	{
		char arr[2] = {s[i], '\0'};
		write(1, arr, 1);
		i--;
	}
	write(1, "\n", 1);
}
