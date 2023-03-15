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
	char *s12;
	int i, j;

	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)

		s2 = "";

		i = j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	s12 = malloc(sizeof(char) * (i + j + 1));

	if (s12 == NULL)
		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{
		s12[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s12[i] = s2[j];
		i++, j++;
	}
	conct[i] = '\0';
	return (s12);
}

