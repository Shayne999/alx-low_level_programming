#include "main.h"

/**
 *_isalpha - Function checks if parameter is an alphabet.
 *@c: character's ACII value to be checked.
 *Return: 0(Success)
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
