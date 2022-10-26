#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string followed by a newline
 * @str: the string to be operated
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int half = len / 2;

	if (len % 2 != 0)
		half++;

	for (i = half; str[i]; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
