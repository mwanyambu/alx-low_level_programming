#include < stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - copies a string
 * @str: duplicate
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *dup;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;

	while (str[a] != '\0')
		a++;

	dup = malloc(sizeof(char) * (a + 1));

	if (dup == NULL)
		return (NULL);

	for (b = 0; dup[b]; b++)
		dup[b] = str[b];
	return (dup);
}
