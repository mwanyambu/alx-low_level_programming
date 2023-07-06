#include "main.h"

/**
 * set_bit - sets bit to 1 at a specific index
 * @index: position strting from 0 of the bit you want to set
 * @n: pointer to integer that the bitis set to
 * Return: 1 on success else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	else
	{
		*n ^= (1 << index);
		return (1);
	}
}
