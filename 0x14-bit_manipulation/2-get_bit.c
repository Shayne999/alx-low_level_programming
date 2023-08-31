#include "main.h"

/**
 * get_bit - returns value of a bit at index
 * @n: value
 * @index: position
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
