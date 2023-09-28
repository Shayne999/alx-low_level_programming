#include "main.h"

/**
 * clear_bit - sets value of a bit at index to 0
 * @n: pointer to value
 * @index: bit index
 * Return: 1 (Success)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	*n &= (~(1UL << index) & *n);
	return (1);
}

