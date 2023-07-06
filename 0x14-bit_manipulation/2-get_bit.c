#include "main.h"

/**
 * get_bit - returns value of bit at given position
 * @index: position of bit
 * @n: integer
 * Return: value of bit else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	else
	{
		return ((n >> index) & 1);
	}
}
