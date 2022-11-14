#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, r;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (r = 0; r < height; r++)
	{
		arr[r] = (int *) calloc(width, sizeof(int));
		if (arr[r] == NULL)
		{
			for (i = 0; i < r; i++)
				free(arr[i]);
			return (NULL);
		}
	}

	return (arr);
}
