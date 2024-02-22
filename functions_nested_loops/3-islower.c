#include "main.h"

/**
 * _islower - prints the lower case letters
 *@c: variable
 *Return: 1 if is lowercase else 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
