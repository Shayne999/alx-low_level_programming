#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a list
 * @head: pointer to list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
