#include "main.h"

/**
 * string_toupper - converts string to uppercase
 * @str: the string
 * Return: str uppercase
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= '0' && str[index] <= 'z')
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}
