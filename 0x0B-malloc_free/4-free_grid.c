#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocate for the grid that has been
 * created by alloc_grid()
 * @grid: the grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
<<<<<<< HEAD
	for (; height >= 0;)
	{
		free(grid[--height]);
	}
=======
	if (grid == NULL || height == 0)
		return;

	for (; height > 0;)
		free(grid[--height]);
>>>>>>> 2bcc4d96b6d1a86a843895d0e88aa74a4cd4e11d

	free(grid);
}
