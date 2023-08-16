#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds two numbers
 * @a: first numer
 * @b: second number
 * Return: sum of two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference between two numbers
 * @a: first numer
 * @b: second number
 * Return: difference between two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first numer
 * @b: second number
 * Return: multiplication of two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first numer
 * @b: second number
 * Return: division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: first numer
 * @b: second number
 * Return: remainder from division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
