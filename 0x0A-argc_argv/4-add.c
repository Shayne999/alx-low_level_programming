#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * numCheck - checks if strings are digits
 * @str: string pointer
 * Return:1
 */

int numCheck(char *str)
{
	unsigned int i = 0;
	unsigned int len = strlen(str);

	while (i < len)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int str_to_int;
	int sum = 0;

	while (i < argc)
	{
		if (numCheck(argv[i]))
		{
			str_to_int = atoi(argv[i]);
			sum = sum + str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
