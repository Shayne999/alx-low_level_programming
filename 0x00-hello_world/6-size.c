#include <stdio.h>
/**
 * main - A function that prints the sized of various computer types
 * Return: 0(Sucess)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(int));
	printf("Size of float: %zu byte(s)\n", sizeof(int));
	return (0);
}
