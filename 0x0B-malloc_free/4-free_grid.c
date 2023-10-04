#include <stdlib.h>

/**
 * free_grid - Frees the previously created grid
 * @grid: The grid to free
 * @height: The number of rows for the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
