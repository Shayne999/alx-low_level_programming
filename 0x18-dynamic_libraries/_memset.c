#include "main.h"

/**
 * _memset - Function fills memory with a constant byte
 * @s: pointer to be filled
 * @b: value we want to set in each byte
 * @n: number of bytes in memory
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
