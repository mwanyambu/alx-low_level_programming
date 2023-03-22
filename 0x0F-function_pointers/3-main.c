#include "calc.h"

/**
 * main - performs simple operations
 * @argc: argument counter
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int first_arg, second_arg, result;
	char o;

	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	first_arg = atoi(argv[1]);
	second_arg = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	o = *argv[2];

	if ((o == '/' || o == '%') && second_arg == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(first_arg, second_arg);
	printf("%d\n", result);
	return (0);
}



