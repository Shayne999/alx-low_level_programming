#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 * @array: given array
 * @size: array size
 * @action: pointer to fuction
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;
	if (size == 0)
		return;
	if (action == NULL)
		return;
	for (i = 0; 1 < size; i++)
	{
		action(array[i]);
	}
}
