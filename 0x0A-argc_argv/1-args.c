#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */

int main(iny argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
