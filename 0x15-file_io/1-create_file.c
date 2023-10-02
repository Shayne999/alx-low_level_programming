#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: string to write to file
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int new = 1;
	int i = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		new = write(file, text_content, i);
	}
	if (new == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
