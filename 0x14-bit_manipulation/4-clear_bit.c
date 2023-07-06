#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at a given position
 * @index: position of bit to be cleared
 * @n: pointer to bit
 * Return: 1 else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	else
	{
		*n &= ~(1ul << index);
		return (1);
	}
}
