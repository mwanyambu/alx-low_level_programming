#include "main.h"

/**
 * _abs - prints absolute value
 * @a the interger to be computed
 * Return: returs abs value
 */
int _abs(int a)
{
	int k = a;
	int absvalue;

	if (k < 0)
	{
		k = k * (-1);
	}
	absvalue = k;
	return (absvalue);
}
