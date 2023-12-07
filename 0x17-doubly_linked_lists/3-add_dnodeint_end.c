#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of a list
 * @head: pointer to list
 * @n: list data
 * Return: new_node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node ==  NULL)
	{
		return (NULL);
	}

	new_node->prev = NULL;
	new_node->next = NULL;
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		new_node->prev = current;
		current->next = new_node;
	}

	return (new_node);
}
