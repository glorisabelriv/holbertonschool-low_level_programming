#include "main.h"

/**
 * _islower - print lowercase letters
 *@c: variable
 * Return: 1 is is lowercase else 0
 **/

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
