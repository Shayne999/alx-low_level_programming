#include "main.h"

/**
 *print_last_digit - Function prints last digit.
 *@x: integer to be checked.
 *Return: 0(Success)
 */

int print_last_digit(int x)
{
	int l;

	l = x % 10;
	if (l < 0)
	{
		_putchar(-l);
		return (-l);
	}
	else
	{
		_putchar(l);
		return (l);
	}
	return (0);
}
