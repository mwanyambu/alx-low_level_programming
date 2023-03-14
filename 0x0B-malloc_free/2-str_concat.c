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
	unsigned int x = 0, y = 0, lena = 0, lenb = 0;

	while (s1 && s1[lena])
		lena++;
	while (s2 && s2[lenb])
		lenb++;
	s12 = malloc(sizeof(char) * (lena + lenb + 1));
	if (s12 == NULL)
		return (NULL);

	x = 0;
	y = 0;

	if (s1)
	{
		while (x < lena)
		{
			s12[x] = s1[x];
			x++;
		}
	}
	if (s2)
	{
		while (x < (lena + lenb))
		{
			sa12[x] = s2[j];
			x++;
			y++;
		}
	}
	s12[x] = '\0';
	return (s12);
}
