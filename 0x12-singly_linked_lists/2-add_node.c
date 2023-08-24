#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - adds a new note at the beginning of the list
 * @head: list
 * @str: string pointer
 * Return: str_cpy
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *str_cpy;

	str_cpy = malloc(sizeof(list_t));
	if (str_cpy == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}

	str_cpy->len = i;
	str_cpy->str = strdup(str);
	str_cpy->next = *head;
	*head = str_cpy;
	return (str_cpy);
}
