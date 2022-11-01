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
	int len = strlen(src);

	for (i = 0; src[i]; i++)
	{
		*(dest + len + i) = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
