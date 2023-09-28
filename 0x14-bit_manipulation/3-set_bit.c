#include "main.h"

/**
 * set_bit - sets value at index to 1
 * @n: value pointer
 * @index: bit index
 * Return: 1(Success)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
