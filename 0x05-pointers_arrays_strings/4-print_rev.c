#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - reverses a string and returns it
 * @s: the string to be reversed
 *
 * Return: char
 */
void print_rev(char *s)
{
	int i, j, end;
	char str[800];

	strcpy(str, s);

	end = strlen(s) - 1;
	i = 0;
	j = end;
	for (; i <= end; i++, j--)
	{
		s[i] = str[j];
	}

	printf("%s\n", s);
}
