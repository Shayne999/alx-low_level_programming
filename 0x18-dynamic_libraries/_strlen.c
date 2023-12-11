#include "main.h"

/**
 * _strlen - main function
 * @s: parameter to be checked
 * Return: 0 always
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length] != '\0')
	{
		string_length++;
	}
	return (string_length);
}
