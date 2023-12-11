#include "main.h"

/**
 * _abs - Function computes the absolute value of an integer.
 * @x: integer to be checked.
 * Return: 0(Success)
 */

int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
	return (0);
}
