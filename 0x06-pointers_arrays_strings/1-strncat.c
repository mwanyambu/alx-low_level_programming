#include "main.h"

/**
 * _strncat - merges two strings
 * @src: source
 * @dest: destination
 * Return: dest
 * @n: bytes
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_lent++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}




