#include "main.h"

/**
 * error_98 - checks error 98
 * @file_zero: value
 * @buff: buffer
 * @argv: argument
 */

void error_98(int file_zero, char *buff, char *argv)
{
	if (file_zero < 0)
	{
		dprintf(2, "Error: cant't read from file %s\n", argv);
		free(buff);
		exit(98);
	}
}

/**
 * error_99 - checks error 99
 * @file_zero: value
 * @buff: buffer
 * @argv: argument
 */

void error_99(int file_zero, char *buff, char *argv)
{
	if (file_zero < 0)
	{
		dprintf(2, "Error: can't write to %s\n", argv);
		free(buff);
		exit(99);
	}
}

/**
 * error_100 - checks error 100
 * @file_zero: value
 * @buff: buffer
 */
void error_100(int file_zero, char *buff)
{
	if (file_zero < 0)
	{
		dprintf(2, "Error: can't close fd %i\n", file_zero);
		free(buff);
		exit(100);
	}
}

/**
 * main - main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int file_zero;
	int file_one;
	int res_zero;
	int res_one;
	char *buff;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = malloc(sizeof(char) * BUF_SIZE);

	if (!buff)
		return (0);

	file_one = open(argv[1], O_RDONLY);
	error_98(file_one, buff, argv[1]);
	file_zero = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(file_zero, buff, argv[2]);

	do {
		res_zero = read(file_one, buff, BUF_SIZE);
		if (res_zero == 0)
			break;
		error_98(res_zero, buff, argv[1]);
		res_one = write(file_zero, buff, res_zero);
		error_99(res_one, buff, argv[2]);
		} while (res_zero > 0);

	res_zero = close(file_zero);
	error_100(res_zero, buff);
	res_zero = close(file_one);
	free(buff);
	return (0);
}
