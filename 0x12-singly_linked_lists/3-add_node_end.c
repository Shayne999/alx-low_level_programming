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
	size_t i = 0;
	list_t *ptr, *n;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);

	while (str[i])
	{
		i++;
	}

	ptr->len = i;
	ptr->next = NULL;
	n = *head;

	if (n == NULL)
	{
		*head = ptr;
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = n;
	}
	return (*head);
}
