#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of intergers
 * @min: minimum range
 * @max: maximum range
 * Return: ptr
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int s;

	if (min > max)
		return (NULL);
	s = max - min + 1;

	ptr = (int *)malloc(s * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
