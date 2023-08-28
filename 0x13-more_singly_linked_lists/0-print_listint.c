#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: list
 * Return: count
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = h;

	if (h == NULL)
		return (0);

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
