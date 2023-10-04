#include <stdlib.h>

/**
 * alloc_grid - Return a pointer to a 2d array
 * @width: The number of nested arrays(couimns)
 * @height: The number of elements in the nested array(rows)
 *
 * Return: A pointer to the 2d array
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;
	
	if (width <= 0 || height <= 0)
		return (NULL);

	a = (int **)malloc(height * sizeof(int));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(a[j]);
			
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}

	return (a);
}
