#include "main.h"

/**
 * read_textfile - reads textfile and prints to STDOUT
 * @filename: textfile
 * @letters: letters to be read
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *xfile;
	char *buffer;
	ssize_t rd;
	ssize_t wr;

	if (filename == NULL)
	{
		return (0);
	}
	xfile = fopen(filename, "r");

	if (xfile == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(xfile);
		return (0);
	}
	rd = fread(buffer, sizeof(char), letters, xfile);
	wr = write(STDOUT_FILENO, buffer, rd);
	if (rd == -1 || wr == -1 || rd != wr)
	{
		fclose(xfile);
		free(buffer);
		return (0);
	}
	fclose(xfile);
	free(buffer);
	return (wr);
}
