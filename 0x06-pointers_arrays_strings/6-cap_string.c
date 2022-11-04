/**
 * cap_string - capitalizes everey word of a string
 * @s: the string to be modified
 *
 * Return: the modified string
 */
char *cap_string(char *s)
{
	int i, j, diff;
	char punc[14] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}', '\0'};

	diff = 32;

	/* capitalize the first character of the string */
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= diff;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; punc[j]; j++)
		{
			/* checks if the current character is a punctuation */
			/* and if the following character is in lowercase */
			if ((s[i] == punc[j]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				/* converts the following character to an uppercase */
				s[i + 1] -= diff;
				break;
			}
		}
	}

	return (s);
}
