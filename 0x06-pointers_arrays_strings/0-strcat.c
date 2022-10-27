/**
 * _strcat - concatenates the arguments
 * @src: the source string
 * @dest: the destination string
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (*(dest++))
		len++;

	for (i = 0; *(src + i); i++)
		dest[len++] = src[i];

	return (dest);
}
