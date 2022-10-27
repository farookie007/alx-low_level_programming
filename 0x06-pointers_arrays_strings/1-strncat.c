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
	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[len++] = *(src + i);
	}
	return (dest);
}
