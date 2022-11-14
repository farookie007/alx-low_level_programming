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
	int r, c;

	if (height <= 0 || width <= 0)
		return (NULL);

	/* reserve memory for `height` rows */
	arr = (int **) malloc(height * sizeof(int *));

	/* if malloc failed */
	if (arr == NULL)
	{
		return (NULL);
	}

	for (r = 0; r < height; r++)
	{
		/* allocates memory for each row */
		arr[r] = (int *) malloc(width * sizeof(int));
		if (arr[r] == NULL)
		{
			free(arr);
			for (; r >= 0; r--)
				free(arr[r]);
			return (NULL);
		}
	}

	/* fills the reserved memory with integer value of 0 */
	for (r = 0; r < height; r++)
	{
		for (c = 0; c < width; c++)
		{
			arr[r][c] = 0;
		}
	}

	return (arr);
}
