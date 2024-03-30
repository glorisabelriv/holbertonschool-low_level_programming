#include "main.h"
#include <stdio.h>
/**
 *binary_to_uint - converts a binary number
 *@b: pointer const
 *Return: the converted number or 0
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
			return (0);

			while (b[i])
			   if (b[i] == '0' || b[i] == '1')
			{
			val <<= 1;
			val += b[i] - '0';
			i++;
			}
			   else
			   {
				   return (0);
			   }
			return (val);
}
