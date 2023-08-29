#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to list pointer
 * Return: node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int value = temp->n;

	if (*head == NULL)
	{
		return (0);
	}

	*head = (*head)->next;
	free(temp);
	return (value);
}
