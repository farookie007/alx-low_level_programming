/**
 * string_toupper - changes all lowercase letters of a string
 * to its uppercase equivalent
 * @s: string to modify
 *
 * Return: the modified string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		/* check if the character is in lowercase */
		if ('a' <= s[i] <= 'z')
			/* converts it to the uppercase equivalent */
			s[i] -= 32;
	}

	return (s);
}
