#include "main.h"
#include <string.h>

/**
 * create _file - creates a file
 * @filename: name of file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 else -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int _write;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content != NULL)
	{
		_write = write(file, text_content, strlen(text_content));
	}
	if (file == -1 || _write == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
