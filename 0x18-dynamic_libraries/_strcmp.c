#include "main.h"

/**
 * _strcmp - function compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: 0 (succes)
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
