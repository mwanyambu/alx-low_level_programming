#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text to the end of the file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success else -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int _write;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_APPEND);
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
