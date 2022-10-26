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
	int half = strlen(str) / 2;
	
	for (i = half - 1; str[i]; i++)
	{
		printf("%c", str[i]); 
	}
	printf("\n");
}
