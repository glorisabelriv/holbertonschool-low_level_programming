#include "main.h"
/**
 * _isupper - checks uppercase char
 *@c: variable
 *Return: 1 if uppercase else 0
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
