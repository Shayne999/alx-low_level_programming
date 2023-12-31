#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a 2D array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if (height <= 0)
		return (NULL);
	if (width <= 0)
		return (NULL);

	array = (int **)malloc(height * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j <= i; j++)
				free(array[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
