#include <stdio.h>
#include <stdlib.h>
/**
 * main - initiates printf
 * Return: returns 0
 */
int main(void)
{
	int n;

	printf("Please enter an integer\n: ");
	scanf("%d", &n);
	if (n > 0)	
	{
		printf("is positive\n");
	}

	else if (n == 0)
	{
		printf("is zero\n");
	}

	else
	{
		printf("is negative\n");
	}
	return (0);
}
