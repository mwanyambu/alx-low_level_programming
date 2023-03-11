#include <stdio.h>
#include <stdlib.h>
#include "maihn.h"
#include <ctype.h>
#include <string.h>

/**
 * check_num - look for integers
 * @str: sting
 * Return: 0
 */
int check_num(char *str)
{
	int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - add two positeve ints
 * @argc: argument count
 * @argv: argument array
 * Return: 0 if no value, 1 if special character
 */
int  main(int argc, char *argv[])
{
	int count;
	int convert_str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			convert_str_int = atoi(argv[count]);
			sum += convert_str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}

