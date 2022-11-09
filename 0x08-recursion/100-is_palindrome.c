#include <string.h>

/**
 * is_palindrome - tests if a string is a palindrome
 * @s: the string to be tested
 *
 * Return: 1 if string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	char copy[100];
	int i = 0;
	int j = strlen(s) - 1;

	strcpy(copy, s);
	if (*(s + 1))
		return (1);
	for (; s[i]; i++, j--)
	{
		if (s[i] != copy[j])
			return (0);
	}
	return (1);
}
