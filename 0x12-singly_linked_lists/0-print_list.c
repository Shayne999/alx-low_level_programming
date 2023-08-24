#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list
 * @h: list
 * Return: i
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
