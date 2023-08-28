#include "lists.h"

/**
 * listint_len - returns the number of elements in a list
 * @h: list
 * Return: count
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = h;

	if (h == NULL)
		return (0);

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
