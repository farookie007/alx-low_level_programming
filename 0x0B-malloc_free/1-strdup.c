#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * o a duplicate syring and returns rhe duplicate
 * @str: string to duplicate
 *
 * Return: pointer to the duplicate string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	len = strlen(str);

	if (str == NULL)
		return (NULL);

	dup = malloc(sizeof(char) * (len + 1));

	/* if malloc failed */
	if (dup == NULL)
		return (dup);

	for (i = 0; str[i]; i++)
		*(dup + i) = str[i];

	*(dup + i) = '\0';

	return (dup);
}
