#include "main.h"

/**
 * print_rev - function prints a string in reverse
 * @s: string pointer
 * Return: 0 Always
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar (s[i]);
	}
	_putchar ('\n');
}
