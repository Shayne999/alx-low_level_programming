#include "main.h"
/**
 * sqrfun - is a helper function that recursively searches for
 *		square root of x by  squaring y
 * @x: input n in _sqrt_recursion function
 * @y: number tobe squared
 * Return: (sqrfun(x, y + 1)
 */
int sqrfun(int x, int y)
{
	if ((y * y) == x)
	{
		return (y);
	}
	else
	{
		if ((y * y) > x)
			return (-1);
		else
			return (sqrfun(x, y + 1));
	}
}

/**
 * _sqrt_recursion - returns natiral square root of number
 * @n: input number
 * Return: (sqrfun(n, 0)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrfun(n, 0));
}
