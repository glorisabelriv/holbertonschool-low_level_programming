#include "main.h"
/**
 *get_bit - function that return value
 *@n: int unsigned long
 *@index: value given index
 *Returns: value of bits index or -1
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n & (1 << index)) ? 1 : 0);
}
