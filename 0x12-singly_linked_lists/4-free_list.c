#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - frees list
 * @head: list
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
