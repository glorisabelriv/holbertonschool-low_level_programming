#include "main.h"
/**
 *get_bit - function that return value
 *@n: int unsigned long
 *@index: value given index
 *Returns: value of bits index or -1
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 70)
		return (-1);
	i = ((n >> index) & 1);
	return (i);
}
