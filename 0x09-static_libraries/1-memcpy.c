/**
 * *_memcpy - copies n bytes of memory area from src to dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes of memory to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* replacing the bytes from n-1 index in dest with the src correspondence */
	while (n-- > 0)
		dest[n] = src[n];

	return (dest);
}
