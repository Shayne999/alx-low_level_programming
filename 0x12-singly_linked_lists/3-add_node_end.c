#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - adds new node to the end of the list
 * @head: list
 * @str: string pointer
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *ptr = *head;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	return (*head);
}
