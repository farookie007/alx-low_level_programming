#include <stdlib.h>
#include "main.h"


char *_memset(char *s, char b, unsigned int n);

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	/* if nmemb or size equals to 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* if malloc fails */
	ptr = (char *) malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	/* fills the array with zeroes */
	_memset(ptr, '0', nmemb);

	return (ptr);
}
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
