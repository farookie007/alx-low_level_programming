#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string and returns it
 * @s: the string to be reversed
 *
 * Return: char
 */
void rev_string(char *s)
{
	int i, j, end;
	char str[800];

	strcpy(str, s);

	end = strlen(s) - 1;
	i = 0;
	j = end;
	for (i, j; i <= end; i++, j--)
	{
		s[i] = str[j];
	}
}

/**
 * _strlen - Returns the length of the string argument
 * @s: pointer to the string address
 *
 * Return: the length as an integer
 */
/*
int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	return (count);
}
*/
