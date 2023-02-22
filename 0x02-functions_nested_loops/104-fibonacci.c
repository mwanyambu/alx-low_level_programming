#include <stdio.h>

/**
 * main - prints the first 98 in the fibonacci sequence
 * Return: return 0
 */
int main(void)
{
	int c, boolean, boolean2;
	long int x, y, z, x1, y1, z1;

	x = 1;
	y = 2;
	boolean = boolean2 = 1;
	printf("%ld, %ld", x, y);
	for (c = 0; c <= 98; c++)
	{
		if (boolean)
		{
			z = x + y;
			printf(", %ld", z);
			x = y;
			y = z;
		}
		else
		{
			if (boolean2)
			{
				y1 = x % 1000000000;
				z1 = y % 1000000000;
				x = x / 1000000000;
				y = y / 1000000000;
				boolean2 = 0;
			}
			x1 = (y1 + z1);
			z = x + y + (x1 / 1000000000);
			printf(", %ld", z);
			printf("%ld", x1 % 1000000000);
			x = y;
			y1 = z1;
			y = z;
			z1 = (x1 % 1000000000);
		}
		if (((x + y) < 0) && boolean == 1)
		boolean = 0;
	}
	printf("\n");
	return (0);
}


