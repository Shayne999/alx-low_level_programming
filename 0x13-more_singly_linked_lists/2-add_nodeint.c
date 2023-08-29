#include "lists.h"

/**
 * add_nodeint - addds new node at the beginning of a list
 * @head: list
 * @n: new node data
 * Return: new node address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	return (new);
}
