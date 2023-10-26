#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	char *x;
	int y = 1;

	x = (char *)&y;

	return (*x);
}
