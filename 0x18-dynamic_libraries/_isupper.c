#include "main.h"

/**
 * _isupper - Checks if parameter is uppercase.
 * @c: parameter to be checked.
 * Return: 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
