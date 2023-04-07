#include "main.h"
#include <stddef.h>

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: num 1
 * @m: num 2
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int fbt = n ^ m;
	unsigned int count_bits = 0;

	while (fbt)
	{
		count_bits += (fbt & 1);
		fbt >>= 1;
	}
	return (count_bits);
}
