#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index
 * @head: list
 * @index: nth node of a list
 * Return: null if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
	if (count == index)
		return (head);

	head = head->next;
	count++;
	}
	return (NULL);
}
