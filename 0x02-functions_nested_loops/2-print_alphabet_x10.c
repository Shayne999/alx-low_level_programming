#include "main.h"

/**
 *print_alphabet_x10 - entry point
 *Return: void
 */

void print_alphabet_x10(void)
{
	char i;
	int n = 0;

	while (n < 10)
	{
		for (i = 'a'; i < 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	n++;
	}

}
