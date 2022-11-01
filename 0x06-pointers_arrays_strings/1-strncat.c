/**
 * *_strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = strlen(dest);

	for (i = 0; src[i] && i < n; i++)
	{
		/* concatenating the characters in src to dest */
		*(dest + len + i) = src[i];
	}
	/* making the last character in dest the null character */
	*(dest + len + i) = '\0';

	return (dest);
}
