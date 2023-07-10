#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: null terminated string to write
 * Return: 1 if succesfull else -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int fl;
	int wr;

	if (filename == NULL)
	{
		return (-1);
	}
	fl = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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
