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
	char new_str[] = _revstr(*s);
	int len = _strlen(*s);

	write(1, new_str, len);
	write(1, "\n", 1);
}

/**
 * _revstr - reverses a string and returns it
 * @s: the string to be reversed
 *
 * Return: char
 */
char _revstr(*s)
{
	int len = _strlen(*s);
	char arr[len];
	int i;

	for (i = 0; i < len; i++)
	{
		arr[i] = s[len - 1 - i];
	}
	arr[len] = '\0';
	return (arr);
}

/**
 * _strlen - Returns the length of the string argument
 * @s: pointer to the string address
 *
 * Return: the length as an integer
 */
int _strlen(char *s)
{
	int i;
	int counter = 0;

	for (i = 0; s[i]; i++)
	{
		counter++;
	}
	return (counter);
}
