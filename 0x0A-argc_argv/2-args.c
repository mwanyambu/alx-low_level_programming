#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x = 0;

	if (argc > 0)
	{
		while (x < argc)
		{
			printf("%s\n", argv[x]);
			x++;
		}
	}
	return (0);
}
