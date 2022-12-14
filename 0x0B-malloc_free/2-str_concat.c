#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: new string (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i, len1, len2, total_len;

	len1 = s1 ? strlen(s1) : 0;
	len2 = s2 ? strlen(s2) : 0;
	total_len = len1 + len2;
	s3 = malloc(sizeof(char) * (total_len + 1));

	/* if malloc failed */
	if (s3 == NULL)
		return (NULL);

	if (s1)
	{
		for (i = 0; s1[i]; i++)
			*(s3 + i) = s1[i];
	}

	if (s2)
	{
		for (i = 0; s2[i]; i++)
			*(s3 + i + len1) = s2[i];
	}
	*(s3 + total_len) = '\0';

	return (s3);
}
