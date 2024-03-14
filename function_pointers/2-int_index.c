#include <stddef.h>
#include "function_pointers.h"
/**
 *int_index - entry point
 *@array: pointer
 *@size: char
 *@cmp: int pointer
 *Return: if no element -1 if size 0
 **/
int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (array && cmp)
	{
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
		}
	}
	return (-1);
}
