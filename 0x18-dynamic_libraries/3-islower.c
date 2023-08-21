#include "main.h"

/**
 * _islower - checks whether c  is lowercase character
 * @c: character to check for lowercase
 * Return: 0-if lowercase, 1-if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
