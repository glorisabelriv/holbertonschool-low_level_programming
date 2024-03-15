#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - Returns the sum of all its parameters
 *@n: The number of parameters
 *Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
