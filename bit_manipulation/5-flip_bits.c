#include "main.h"
/**
 *flip_bits - number of bitd need to flip
 *@n: unsigned long number bits
 *@m: unsigned long
 *Return: usingned int
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int j = n ^ m;

	while (j > 0)
	{
		i++;
		j &= (j - 1);
	}

	return (i);
}
