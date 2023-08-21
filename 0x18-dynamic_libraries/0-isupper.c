#include "main.h"

/**
 * _isupper -  checks wheater a character is uppercase
 * Return: 1-if uppercase, 0-if lowercase
 * @c: the checker
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
