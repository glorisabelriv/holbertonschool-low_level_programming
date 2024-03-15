#include "main.h"
/**
 *factorial - entry point
 *@n: int
 *Return: if n lower 0 else -1
 **/
int factorial(int n)
{
	if ((n == 1) || (n == 0))
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
