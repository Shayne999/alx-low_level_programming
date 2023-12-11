#include "main.h"

/**
 * _strncpy - function copies a string
 * @dest: string destination pointer
 * @src: string source
 * @n: integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int bytes = 0;

	while (bytes < n && src[bytes] != '\0')
	{
		dest[bytes] = src[bytes];
		bytes++;
	}

	while (bytes < n)
	{
		dest[bytes] = '\0';
		bytes++;
	}
	return (dest);
}
