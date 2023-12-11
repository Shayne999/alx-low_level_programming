#include "main.h"

/**
 * _strncat - function concatenates two strings
 * @dest: string pointer
 * @src: string pointer
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int str_len = 0;
	int i = 0;

	while (dest[str_len] != '\0')
	{
		str_len++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[str_len] = src[i];
		str_len++;
		i++;
	}
	dest[str_len] = '\0';
	return (dest);
}
