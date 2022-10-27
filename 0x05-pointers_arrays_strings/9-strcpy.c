#include <stdio.h>
/**
 * _strcpy - The function
 * @dest: destination string
 * @src: source string
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		*(dest + i - 1) = src[i];
	}
	*(dest + i) = '\0';
	return (&dest[i]);
}
