#include <stdio.h>

/**
 * main - prints out the fibonacci series
 * Return: return 0
 */
int main(void)
{
	int x;
	long int i, j, k;

	i = 1;
	j = 2;
	printf("%ld, %ld", i, j);
	for (x = 0; x < 48; x++)
	{
		k = i + j;
		printf(", %ld", k);
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
