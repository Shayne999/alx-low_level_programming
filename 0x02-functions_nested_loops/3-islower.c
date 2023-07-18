#include "main.h"

/**
 *_islower - Function entry point.
 *param c - The character to be checked
 *Return: 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
