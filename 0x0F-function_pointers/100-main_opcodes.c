#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints own opcodes
 * @argc: argument counter
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, a;
	char *arg;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arg = (char *)main;

	for (a = 0; a < bytes; a++)
	{
		if (a == bytes - 1)
		{
			printf("%02hhx\n", arg[a]);
			break;
		}
		printf("%02hhx ", arg[a]);
	}
	return (0);
}
