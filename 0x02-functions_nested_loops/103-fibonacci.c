#include <stdio.h>

/**
 * main - prints out the fibonacci sequence
 * Return: return 0
 */
int main(void)
{
	long int i, j, k, m;

	i = 1;
	j = 2;
	k = m = 0;
	while (k <= 4000000)
	{
		k = i + j;
		i = j;
		j = k;
		if ((i % 2) == 0)
			m += i;

	}
	printf("%ld\n", m);
	return (0);
}




