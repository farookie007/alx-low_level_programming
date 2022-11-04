#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	static int i = strlen(s);

	if (i == 0)
	{
		printf("\n");
	} else
	{
		printf("%c", s[i--]);
		_print_rev_recursion(s);
	}
}
