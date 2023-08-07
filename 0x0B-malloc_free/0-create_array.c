#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array with the specified parameters
 * @size: unsigned int
 * @c: character
 * Return: str
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));

	if (*str == '\0')
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
