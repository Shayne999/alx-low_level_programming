#include "function_pointers.h"

/**
 * print-name - function prints name
 * @name: given name
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
