#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: filename
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int wr;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		wr = write(fp, text_content, strlen(text_content));
	}
	if (fp == -1 || wr == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
