#include <stdio.h>
/**
 * main - Function prints all letters unless specified otherwise.
 * Return: 0(Success)
 */

int main(void)
{
	int a =97;

	while (a <=122)
	{
		if (a == 101 || a == 113)
		{
			a++;
			continue;
		}
		putchar(a);
		a++;
	}
	return (0);
}
