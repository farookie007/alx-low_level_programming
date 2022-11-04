#include <stdio.h>
#include <string.h>

void _puts_recursion(char *s);

/**
 * _rev - reverses a string
 * @s: the string to be reversed
 *
 * Return: void
 */
void *_rev(char *s)
{
	char str[900];
	int j = 0;
	int i = strlen(s) - 1;

	strcpy(str, s);

	for (; s[i]; i--, j++)
		*(s + j) = str[i];
}

/**
 * _print_rev_recursion - prints a string in reverse recursively
 * @s: the string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	_rev(s);
	_puts_recursion(s);
}

/**
 * _puts_recursion - prints a string followed by a newline
 * @s: the string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
	}
	else
	{
		printf("%c", *(s++));
		_puts_recursion(s);
	}
}
