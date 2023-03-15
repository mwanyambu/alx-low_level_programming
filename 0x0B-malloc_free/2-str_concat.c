#include "main.h"
#include <stdlib.h>

/**
 * _strlen - checks length of array
 * @s: array
 * Return: i
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - joins two strings
 * @s1: string 1
 * @s2: string 2
 * Description: concatnates s1 and s2
 * Return: conc
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int i;
	int j;
	int ind = 0;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	ind = (_strlen(s1) + _strlen(s2) + 1);

	conc = (char *) malloc(sizeof(char) * ind);
	if (conc == 0)
	{
		return (NULL);
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(conc + i) = *(s1 + i);
	}
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(conc + i) = *(s2 + j);
		i++;
	}
	return (conc);
}

