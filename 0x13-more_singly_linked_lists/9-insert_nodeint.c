#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at index
 * @head: pointer to lost pointer
 * @idx: index
 * @n: node value
 * Return: new node address
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *ptr = *head;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	if (ptr != NULL && count < idx - 1)
	{
		ptr = ptr->next;
		count++;
	}
	else
	{
		free(new);
	}
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
