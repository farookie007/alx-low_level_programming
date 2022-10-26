#include "main.h"

/**
 * _revstr - reverses a string and returns it
 * @s: the string to be reversed
 *
 * Return: char
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int end = len - 1;
	char arr[];
	int i;

	for (i = 0; i <= end; i++)
	{
		arr[i] = *(s - i);
	}
	arr[len] = '\0';
	*s = arr;
}
