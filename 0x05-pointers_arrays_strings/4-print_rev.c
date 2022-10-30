#include "main.h"
#include <string.h>
#include <stdio.h>

char *_rev(char*);
/**
 * print_rev - reverses a string and returns it
 * @s: the string to be reversed
 *
 * Return: char
 */
void print_rev(char *s)
{
	printf("%s\n", _rev(s));
}

/**
 * _rev - reverses a string and return the reversed string
 * @s: the string
 *
 * Return: char*
 */
char *_rev(char *s)
{
	int i, j, end;
	char str[800];

	strcpy(str, s);

	end = strlen(s) - 1;
	i = 0;
	j = end;
	for (; i <= end; i++, j--)
	{
		str[i] = s[j];
	}

	return (str);
}
