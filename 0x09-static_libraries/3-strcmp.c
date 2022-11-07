/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	/* checks if s1 and s2 are equal and not null pointer */
	while ((*s1 == *s2) && (*s1 && *s2))
	{
		/* checks for the next character */
		s1++;
		s2++;
	}

	/* returns the difference of the last two characters */
	return (*s1 - *s2);
}
