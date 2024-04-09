#include "search_algos.h"

/**
 * linear_search - uses binary search to find intergers in a sorted array
 * @array: a pointer to the first element in the array
 * @size: number of elements in the array
 * @value: the value to search
 * Return: -1 if the value is not present
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
