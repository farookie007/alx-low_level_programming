#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		/* executing the recursion first */
		/* so the string doesn't get printed until the last recursion */
		_print_rev_recursion(s++);
		printf("%c", *s);
	}
}
