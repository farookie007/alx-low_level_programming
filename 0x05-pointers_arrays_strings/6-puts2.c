#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character
 * @str: the argument
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (i % 2 == 0)
			printf("%c", str[i]);
	}
	printf("\n");
}
