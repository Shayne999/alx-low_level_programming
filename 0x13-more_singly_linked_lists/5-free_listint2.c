#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to list pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
