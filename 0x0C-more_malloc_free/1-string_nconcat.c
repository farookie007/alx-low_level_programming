#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int i, j, len1, len2;

	len1 = s1 ? strlen(s1) : 0;
	len2 = s2 ? strlen(s2) : 0;
	s = (char *) malloc(sizeof(char) * (len1 + n + 1));
	if (!s)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < len2 && j < (int) n; j++)
		s[i++] = s2[j];
	s[i] = '\0';

	return (s);
}
