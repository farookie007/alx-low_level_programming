/**
 * *_strncpy - copy the string at source into destination
 * @dest: the destination pointer
 * @src: the source pointer
 * @n: number of elements
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while(dest[i++])
		len++;
	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];
	return (dest);
}
