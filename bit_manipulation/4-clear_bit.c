#include "main.h"
/**
 *clear_bit - function sets the value
 *@n: pointer value bit
 *@index: unsignet int index
 *Return: 1 if it worked or -1 if error
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
		return (1);
}
