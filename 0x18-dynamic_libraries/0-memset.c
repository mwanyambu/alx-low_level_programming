#include "main.h"

/**
 * _memset - fills the block ofmemory
 * @s: starting point
 * @b: desired value
 * @n: bytes
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
