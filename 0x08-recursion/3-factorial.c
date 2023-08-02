#include "main.h"

/**
 * factorial - function returns factorial of a given number
 * @n: given interger
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
