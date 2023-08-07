#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: strcat
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int j;
	unsigned int len = 0;
	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;
	char *strcat;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}

	len = len_s1 + len_s2;
	strcat = malloc((len + 1) * sizeof(char));

	/*if (strcat == NULL)
		return (NULL);*/
	for (i = 0; i < len_s1; i++)
	{
		strcat[i] = s1[i];
	}
	for (j = 0; j < len_s2; j++)
	{
		strcat[i + j] = s2[j];
	}
	strcat[len] = '\0';
	return (strcat);
}
