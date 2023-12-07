#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to a pointer
 * @idx: index
 * @n: list data
 * Return: new_node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	unsigned int i = 0;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (*h == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current;
	new_node->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;

	return (new_node);
}
