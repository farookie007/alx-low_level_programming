#include "main.h"

/**
 * rev_string - reverses a string and returns it
 * @s: the string to be reversed
 *
 * Return: char
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int end = len - 1;
	char arr[80];
	int i;

	for (i = 0; i <= end; i++)
	{
		arr[i] = *(s - i);
	}
	arr[len] = '\0';
	s = arr;
}

/**
 * _strlen - Returns the length of the string argument
 * @s: pointer to the string address
 *
 * Return: the length as an integer
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	return (count);
}
