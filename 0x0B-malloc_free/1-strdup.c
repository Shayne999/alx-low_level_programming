#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer copy to newly allocated space
 * @str: string source pointer
 * Return: strcpy
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *strcpy;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	strcpy = malloc((len + 1) * sizeof(char));
	if (strcpy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		strcpy[i] = str[i];
	}
	strcpy[len] = '\0';
	return (strcpy);
}
