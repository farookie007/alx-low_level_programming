#include "main.h"
#include <string.h>
#include <stdio.h>

void rev_string(char *);

/**
 * print_rev - reverses a string and returns it
 * @s: the string to be reversed
 *
 * Return: char
 */
void print_rev(char *s)
{
	char a[800];

	strcpy(a, s);
	rev_string(a);
	printf("%s\n", a);
}

/**
 * rev_string - reverses a string and returns it
 * @s: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
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
}
