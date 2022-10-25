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
	write(2, str, 100);
}
