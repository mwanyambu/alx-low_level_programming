#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatnates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: index
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int x = 0, y = 0, z;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}
	if (n > y)
	{
		n = y;
	}
	p = malloc((x + n + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (z = 0; z < x; z++)
	{
		p[z] = s1[z];
	}
	for (; z < (x + n); z++)
	{
		p[z] = s2[z - x];
	}
	p[z] = '\0';
	return (p);
}
