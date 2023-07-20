#include "main.h"

/**
 * print_numbers - prints numbers
 * Return: 0 (Success)
 */
void print_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		_putchar ('0' + x);
		x++;
	}
	_putchar ('\n');
}
