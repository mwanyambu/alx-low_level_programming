#include "main.h"
/** 
 * _buffer - allocates memory for a buffer
 * @file: filename
 * Return: buffer
 
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
} */
/**
 * main - copies contents of one file to the other
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 on success
 */
int main(int argc, char **argv)
{
	int source, destination, rd, wr, csrc, cdest;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from, file_to");
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	buffer = malloc(sizeof(char) * 1024);
	rd = read(source, buffer, 1024);
	wr = write(destination, buffer, rd);
	csrc = close(source);
	cdest = close(destination);
	if (source < 0 || rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read to %s\n", argv[1]);
		exit(98);
	}
	while (rd > 0)
	{
		if (destination < 0 || wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(source);
			exit(99);
		}
	}
	if (csrc < 0 || cdest < 0)
	{
		if (csrc < 0)
			dprintf(STDERR_FILENO, "Error: Can't close file %d\n", source);
		if (cdest < 0)
			dprintf(STDERR_FILENO, "Error: Can't close file %d\n", destination);
		exit(100);
	}
	free(buffer);
	return (0);
}
