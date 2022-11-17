#include <stdlib.h>
#include "main.h"

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
	int i;

	/* if nmemb or size equals to 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* if malloc fails */
	ptr = (char *) malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	/* fills the array with zeroes */
	for (i = 0; i < (int) nmemb; i++)
		*(ptr + i) = 0;

	return (ptr);
}
