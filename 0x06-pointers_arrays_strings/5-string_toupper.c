#include "main.h"

/**
 * string_toupper - function changes all lowercase letters to uppercase
 * @s: string pointer
 * Return: s (success)
 */

char *string_toupper(char *s)
{
	int str = 0;

	while (s[str] != '\0')
	{
		if (s[str] >= 97 && s[str] <= 122)
		{
			s[str] = s[str] - 32;
		}
		str++;
	}
	return (s);

}
