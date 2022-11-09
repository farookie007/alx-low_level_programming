#include <string.h>

/* prototype */
int _palindrome(char *s, int i, int j);


/**
 * is_palindrome - tests if a string is a palindrome
 * @s: the string to be tested
 *
 * Return: 1 if string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (_palindrome(s, 0, strlen(s)));
}

/**
 * _palindrome - tests if a string is palindrome recursively
 * @s: the string to be tested
 * @i: the starting index
 * @j: the length of the string
 *
 * Return: 1 if the is a palindrome, 0 otherwise
 */
int _palindrome(char *s, int i, int j)
{
	if (s[i] == '\0')
		return (1);
	if (s[i] != s[j - 1])
		return (0);

	return (_palindrome(s, ++i, --j));
}
