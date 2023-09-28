#include "main.h"

/**
 * flip_bits - counts number of bits to change to get between numbers
 * @n: first number
 * @m: second number
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int count = 0;
	unsigned long int num;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; a--)
	{
		num = x >> a;
		if (current & 1)
		{
			count++
		}
	}
	return (count);
}
