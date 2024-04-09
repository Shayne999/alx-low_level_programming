#include "search_algos.h"

/**
 * binary_search - uses binary search algorithim to saerch for a value
 * @array: pointer to the first element in the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if the array if value if not present
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t l;
	size_t r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");

		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = l + (r - l) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}
