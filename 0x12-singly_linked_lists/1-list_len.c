#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: list
 * Return: i
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

