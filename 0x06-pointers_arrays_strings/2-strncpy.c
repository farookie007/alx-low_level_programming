#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
	{
		/* putting the characters in src in dest */
		*(dest + i) = src[i];
	}
	/* making the last character in dest the null character */
	*(dest + i) = '\0';

	return (dest);
}
