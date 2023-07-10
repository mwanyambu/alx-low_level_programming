#include "main.h"

/**
 * main - copies file contents from one file to another
 * @argc: argument count
 * @argv: argument array
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int src, dest, rd, wr, csrc, cdest;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((rd = read(src, buffer, 1024)) > 0)
	{
		wr = write(dest, buffer, rd);
		if (wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(src);
			close(dest);
			exit(99);
		}
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(src);
		close(dest);
		exit(98);
	}
	csrc = close(src);
	cdest = close(dest);
	if (csrc == -1 || cdest == -1)
	{
		if (csrc == -1)
			dprintf(STDERR_FILENO, "Error: Can't close file %d\n", src);
		if (cdest == -1)
			dprintf(STDERR_FILENO, "Error: Can't close file %d\n", dest);
		exit(100);
	}
	return (0);
}
