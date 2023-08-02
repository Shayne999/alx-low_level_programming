#include "main.h"

/**
 * prime_check - function checks for primality
 * @x: input integer
 * @i: divisor candidate
 * Return: 1
 */

int prime_check(int x, int i)
{
	if  (i < x)
	{
		if (x % i == 0)
		{
			return (0);
		}
		else
		{
			return (prime_check(x, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - function checks if input integer is a prime number.
 * @n: input integer
 * Return: (prime_check(n, 2))
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_check(n, 2));
	}
}

