#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add
 * Return: 1 (success)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	w = write(fd, text_content, (ssize_t)strlen(text_content));
	if (w == -1 || w != (ssize_t)strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
