#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: a NULL terminated string to write on file
 * Return: 1 on success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int wr;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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