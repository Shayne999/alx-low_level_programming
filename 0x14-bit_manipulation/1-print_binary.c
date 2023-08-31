#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned int
 * Return: binary representation
 */

void print_binary(unsigned long int n)
{
	int count = 0;
	int i;
	unsigned int x;

	for (i = sizeof(unsigned long int) * 8 -1; i >= 0; i--)
	{
		x = n >> i;
		if (x & 1)
		{
			_putchar('1');
			count++;
		}
		else
		{
			if (count)
				_putchar('0');
		}
	}
	if (count == 0)
		_putchar('0');
}
