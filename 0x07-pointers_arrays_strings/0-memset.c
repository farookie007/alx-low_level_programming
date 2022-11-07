/**
 * *_memset - fills the memory with a constant byte
 * @s: memory area to be filled
 * @b: char to fill the memory with
 * @n: number of memory space to fill
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	/* replacing the bytes from n-1 index with b */
	while (n > 0)
		s[--n] = b;

	return (s);
}
