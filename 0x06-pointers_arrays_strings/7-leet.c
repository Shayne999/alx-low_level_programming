#include "main.h"

/**
 * leet - function that encodes a string
 * @s: string pointer
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * Return: s (success)
 */

char *leet(char *s)
{
	int str_len = 0;
	char letters[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	while (s[str_len] != '\0')
	{
		int i = 0;

		while (i < 10)
		{
			if (letters[i] == s[str_len])
			{
				s[str_len] = nums[i];
			}
			i++;
		}
		str_len++;
	}
	return (s);
}
