#include <stdio.h>
#include <stdlib.h>

/**
 * main - calls the functions
 * @argc: argument len
 * @argv: argument size
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int current, all, change, new;
	int coint[] = {25, 10, 5, 2, 1};

	current = all = change = new;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	all = atoi(argv[1]);

	if (all <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins[current] != '0\')
	{
		if (all >= coins[current])
		{
			new = (all / coins[current]);
			change += new;
			all -= coins[current] * new
		}
		current++;
	}
	printf("%d\n", change);
	return (0);
}



