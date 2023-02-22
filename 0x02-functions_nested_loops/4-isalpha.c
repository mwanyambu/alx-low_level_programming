#include "main.h"

/**
 * _isalpha - checks is character is lowercase or uppercase
 * @c: character to check if alphabet is upper or lowercase
 * Return: 1-if lowercase/uppercase, 0-if neither
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
