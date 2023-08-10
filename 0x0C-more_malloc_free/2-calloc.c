#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of array items
 * @size: size of aray
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = (int *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
