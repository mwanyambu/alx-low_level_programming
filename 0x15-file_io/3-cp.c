#include "main.h"
/**
 * main - copies contents of one file to the other
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int source, destination, rd, wr, csrc, cdest;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to\n");
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((rd = read(source, buffer, 1024)) > 0)
	{
		wr = write(destination, buffer, rd);
		if (wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(source);
			close(destination);
			exit(99);
		}
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(source);
		close(destination);
		exit(98);
	}
	csrc = close(source);
	cdest = close(destination);
	if (csrc == -1 || cdest == -1)
	{
		if (csrc == -1)
			dprintf(STDERR_FILENO, "Error: Can't close file %d\n", source);
		if (cdest == -1)
			dprintf(STDERR_FILENO, "Error: Can't close file %d\n", destination);
		exit(100);
	}
	return (0);
}
