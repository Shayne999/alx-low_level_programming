#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to list pointer
 * @index: index
 * Return: -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		prev = current;
		current = current->next;
	}
	prev->next = current->next;
	free(current);
	current = NULL;
	return (1);
}
