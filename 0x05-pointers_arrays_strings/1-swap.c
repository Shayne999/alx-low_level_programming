#include "main.h"

/**
 * swap_int - function entry point
 * @a: parameter to be swapped.
 * @b: second paremeter to be swapped
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
