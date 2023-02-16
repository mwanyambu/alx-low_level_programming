#include <stdio.h>
/**
 * main - serves as the starting point for program execution
 * Return : returns 0
 */

int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n",  sizeof(int));
	printf("Size of long: %d byte(s)\n", sizeof(long));
	printf("Size of long long: %d byte(s)\n", sizeof(long long));
	printf("Size of float: %d byte(s)\n", sizeof(float));

	return (0);
}

