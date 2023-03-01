#include "main.h"

/**
 * cap_string - capitalizes each word
 * @str: the string
 * Return: str
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		index++;
	}
	if (str[index - 1] == ' ' ||
	str[index - 1] == '\t' ||
	str[index - 1] == '\n' ||
	str[index - 1] == ',' ||
	str[index - 1] == ';' ||
	str[index - 1] == '.' ||
	str[index - 1] == '!' ||
	str[index - 1] == '?' ||
	str[index - 1] == '"' ||
	str[index - 1] == '(' ||
	str[index - 1] == ')' ||
	str[index - 1] == '{' ||
	str[index - 1] == '}' ||
	index == 0)
	{
		str[index] -= 32;
		index++;
	}
	return (str);
}
