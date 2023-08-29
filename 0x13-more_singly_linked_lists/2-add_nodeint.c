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

	if (*head == NULL || n >= (*head)->n)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	else
	{
		while (ptr->next != NULL && ptr->next->n > n)
		{
			ptr = ptr->next;
		}
		new->next = ptr->next;
		ptr->next = new;
	}
	return (new);
}
