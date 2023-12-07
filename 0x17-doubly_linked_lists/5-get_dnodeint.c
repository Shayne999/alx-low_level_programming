#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a list
 * @head: pointer to list
 * @index: nth node
 * Return: current
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
