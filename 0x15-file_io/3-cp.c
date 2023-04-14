#include <stdlib.h>
#include "main.h"
#include <stdio.h>

char *_buffer(char *file);

/**
 * _buffer - allocates memory for a buffer
 * @file: the filename
 * Return: buffer
 */
char *_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * main - copies contents of one file to another
 * @argc: argument counter
 * @argv: array of arguments
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int old_file, new_file;
	ssize_t _read, _write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	old_file = open(argv[1], O_RDONLY);
	new_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0644);
	buffer = _buffer(argv[2]);
	_read = read(old_file, buffer, 1024);
	_write = write(new_file, buffer, _read);

	if (old_file == -1 || _read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	if (new_file == -1 || _write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
	while (_read > 0)
	{
		if (_write != _read)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(old_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", old_file);
		exit(100);
	}
	if (close(new_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", new_file);
		exit(100);
	}
	free(buffer);
	close(old_file);
	close(new_file);
	return (0);
}
