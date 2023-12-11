#include "main.h"

/**
 * _strchr - function locates a character in a  string
 * @s: string pointer to be searched
 * @c: characher inn question
 * Return: null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
