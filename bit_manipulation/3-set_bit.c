#include "main.h"
/**
 *set_bit - sets the value
 *@n: pointer unsigned bit
 *@index: value the index
 *Return: 1 if it worked or -1 error
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	(*n |= (1 << index));
	return (1);
}
