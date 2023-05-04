#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: index starting from 0 of the bit you want to get
 * @n: unsigned long integer to get bit
 * Return: return value of bit at index else -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (0);
	}
	else
	{
		return ((n >> index) & 1);
	}
}
