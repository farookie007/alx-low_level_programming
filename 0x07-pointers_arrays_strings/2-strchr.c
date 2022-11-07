#include <stddef.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL otherwise
 */
char *_strchr(char *s, char c)
{
		while (1)
		{
			/* checks if the string ended and returns NULL */
			if (*s == '\0')
				return (NULL);
			/* checks if the value is char c and returns the address */
			if (*s == c)
				return (s);
			/* increments the pointer address if it is not c */
			s++;
		}
}
