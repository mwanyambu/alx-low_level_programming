#include "main.h"

/**
 * flip_bits - prints number of bits to be flipped
 * @n: num1
 * @m: num2
 * Return: num of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int fl = n ^ m;

	while (fl)
	{
		counter += (fl & 1);
		fl >>= 1;
	}
	return (counter);
}
