#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatnates tow strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int i;
	int len = 0;
	int ind = 0;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		len++;
	}
	conc = malloc(sizeof(char) * len);
	if (conc == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		conc[ind++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		conc[ind++] = s2[i];
	}
	return (conc);
}

