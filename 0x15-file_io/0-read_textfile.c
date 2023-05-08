#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX STDOUT_FILENO
 * @filename: the text file
 * @letters: number of letters to be read and printed
 * Return: num of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *txtfile;
	char *buffer;
	ssize_t R;
	ssize_t W;

	if (filename == NULL)
	{
		return (0);
	}
	txtfile = fopen(filename, "r");

	if (txtfile == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		fclose(txtfile);
		return (0);
	}
	R = fread(buffer, sizeof(char), letters, txtfile);
	W = write(STDOUT_FILENO, buffer, R);
	if (R == -1 || W == -1 || R != W)
	{
		fclose(txtfile);
		free(buffer);
		return (0);
	}
	fclose(txtfile);
	free(buffer);
	return (W);
}
