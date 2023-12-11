#include "main.h"

/**
 * _strcpy - function copies string in src pointer
 * @dest: destination
 * @src: source
 * Return: dest (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
