#include "main.h"

/**
 * _memcpy - copies n bytes of mem from src to dest
 * @src: source
 * @dest: destination
 * @n: number of bytes
 * Return: resturn dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
