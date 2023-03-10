#include "main.h"

/**
 * _strpbrk - locates the first occurence in the string s of any bytes
 * @s: input
 * @accept: input
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
	s++;
	}
	return ('\0');
}
