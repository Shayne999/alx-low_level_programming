#include "main.h"

/**
 * _strpbrk - function searches for a string for any set of bytes
 * @s: source string pointer
 * @accept: acceptable characters string pointer
 * Return:  null
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
