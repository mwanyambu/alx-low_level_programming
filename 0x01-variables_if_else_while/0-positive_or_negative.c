#include <stdio.h>
#include <stdlib.h>
/**
 * main - initiates printf
 * Return: returns 0
 */
int main(void)
{
	int n = int(input("enter an interger "));

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
