#include "main.h"

char *_buffer(char *file);

/**
 * _buffer - allocates memory for a buffer
 * @file: the filename
 * Return: buffer
 */
char *_buffer(char *file)
{
	char *_buffer;

	_buffer = malloc(sizeof(char) * 1024);

	if (_buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (_buffer);
}

/**
 * main - copies contents of one file to another
 * @argc: argument counter
 * @argv: array of arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	int _read, _write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = _buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0644);
	_read = read(file_from, buffer, 1024);
	_write = write(file_to, buffer, _read);

	if (file_from == -1 || _read == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	if (file_to == -1 || _write == -1)
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
			close(file_from);
			close(file_to);
			exit(99);
		}
	}
	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file_from);
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file_to);
		exit(100);
	}
	return (0);
}
