#include <string.h>

/**
 * _strcat - concatenates the arguments
 * @src: the source string
 * @dest: the destination string
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len = strlen(dest);

	for (i = 0; src[i]; i++)
	{
		/* concatenating the characters in src to dest */
		*(dest + len + i) = src[i];
	}
	/* making the last character in dest the null character */
	*(dest + len + i) = '\0';

	return (dest);
}
