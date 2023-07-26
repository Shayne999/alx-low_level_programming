#include "main.h"

/**
 * _strcat - function appends yhe src string to the dest string
 * @dest: string to be appended
 * @src: string source
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int str_len = 0;
	int i = 0;

	while (dest[str_len] != '\0')
	{
		str_len++;
	}

	while (src[i] != '\0')
	{
		dest[str_len] = src[i];
		str_len++;
		i++;
	}
	dest[str_len] = '\0';
	return (dest);
}
