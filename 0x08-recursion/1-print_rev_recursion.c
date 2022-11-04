#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse recursively
 * @*s: the string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int l = strlen(s) - 1;

	s += l;
	if (l < 0)
	{
		printf("\n");
	}
	else
	{
		printf("%c", *(s--));
		l--;
		_print_rev_recursion(s);
	}
}
