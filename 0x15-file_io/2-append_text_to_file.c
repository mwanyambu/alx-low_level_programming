#include "main.h"

/**
 * append_text_to_file - appends text to the end of the file
 * @filename: name of file
 * @text_content: null terminated string to append
 * Return: 1 on success els -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl;
	int wr;

	if (filename == NULL)
	{
		return (-1);
	}
	fl = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		wr = write(fl, text_content, strlen(text_content));
	}
	if (fl == -1 || wr == -1)
	{
		close(fl);
		return (-1);
	}
	close(fl);
	return (1);
}
