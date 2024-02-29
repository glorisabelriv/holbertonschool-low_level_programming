#include "main.h"
/**
 *reverse_array - entry point
 *@a: variable
 *@n: variable
 **/
void reverse_array(int *a, int n)
{
	int i, len = 0;
	int temp = 0;

	for (i = 0; i != n; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		temp = a[i];
		a[i] = a[len - 1];
		a[len - 1] = temp;
		len--;
	}
}
