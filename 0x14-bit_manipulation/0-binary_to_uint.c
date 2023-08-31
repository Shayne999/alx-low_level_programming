#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string to binary characters
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int value = 1;
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' &&  b[i] != '1')
		return (0);
	}

	for (i = i - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			number += value;
		}
		value *= 2;
	}
	return (number);
}
