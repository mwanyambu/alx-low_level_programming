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
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from, file_to");
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	rd = read(source, buffer, 1024);
	if (rd > 0)
	{
		wr = write(destination, buffer, rd);
		if (destination == -1 || wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(source);
			exit(99);
		}
	}
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	csrc = close(source);
	cdest = close(destination);
	if (csrc < 0 || cdest < 0)
	{
		if (csrc < 0)
			dprintf(STDERR_FILENO, "Error: Can't close file %d\n", source);
		if (cdest < 0)
			dprintf(STDERR_FILENO, "Error: Can't close file %d\n", destination);
		exit(100);
	}
	return (0);
}
