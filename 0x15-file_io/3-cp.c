#include "main.h"
/**
 * _buffer - allocates memory for a buffer
 * @file: filename
 * Return: buffer
 */
char *_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * main - copies contents of one file to the other
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 on success
 */
int main(int argc, char **argv)
{
	int source, destination;
	ssize_t rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from, file_to");
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0644);
	buffer = _buffer(argv[2]);
	rd = read(source, buffer, 1024);
	wr = write(destination, buffer, rd);
	if (source == -1 || rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read to %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	while (rd > 0)
	{
		if (destination == -1 || wr == -1 || wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
	}
	if (close(source) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", source);
		exit(100);
	}
	if (close(destination) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", destination);
		exit(100);
	}
	free(buffer);
	close(source);
	close(destination);
	return (0);
}
