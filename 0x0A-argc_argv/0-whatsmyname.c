#include "main.h"
#include <stdio.h>

/**
 * main - function prints program name
 * @argc: argument count
 * @argv: array of arguments pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv);
	return (0);
}
