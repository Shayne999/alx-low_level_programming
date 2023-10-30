#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: pointer to text file
 * @letters: file size
 * Return: w
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r;
	ssize_t w;
	int fd;
	char *new;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	new = malloc(sizeof(char) * letters);
	if (new == NULL)
		return (0);

	r = read(fd, new, letters);
	if (r == -1)
	{
	free(new);
		close(fd);
		return (0);
	}
	w = write(STDOUT_FILENO, new, r);
	if (w == -1)
	{
		free(new);
		close(fd);
		return (0);
	}
	close(fd);
	return (r);
}
