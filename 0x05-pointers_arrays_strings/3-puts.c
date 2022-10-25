#include "main.h"
#include <unistd.h>

/**
 * _puts - writes a string to the stdout
 * @str: the string argument
 *
 * Return: void
 */
void _puts(char *str)
{
	write(2, str, _strlen(str));
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
