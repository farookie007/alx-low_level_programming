/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the encoded string;
 */
char *leet(char *s)
{
	int i, j;

	/* declaring and initializing the encoder and decoder */
	char *dec = "aAeEoOtTlL";
	char *enc = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; dec[j]; j++)
		{
			if (s[i] == dec[j])
			{
				s[i] = enc[j];
				break;
			}
		}
	}

	return (s);
}
