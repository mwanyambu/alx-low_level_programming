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

	while (x < argc)
	{
		printf("%c\n", argv[x]);
		x++;
		return (0);
	}
}
