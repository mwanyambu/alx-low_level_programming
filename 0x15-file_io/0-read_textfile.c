#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX STDOUT.
 * @filename: name of the file
 * @letters: the number of letters to be read and printed
 * Return: num of letters read and printed ELSE 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t _read;
	ssize_t _write;

	if (filename == NULL)
	{
		return (0);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	_read = fread(buffer, sizeof(char), letters, fp);
	_write = write(STDOUT_FILENO, buffer, _read);
	if (_read == -1 || _write == -1 || _read != _write)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	fclose(fp);
	free(buffer);
	return (_write);
}
