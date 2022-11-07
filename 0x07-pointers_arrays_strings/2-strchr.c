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
		while (*s)
		{
			if (*s == '\0')
				return (NULL);
			else if (*s == c)
				return (s);
			else
				s++;
		}
}
