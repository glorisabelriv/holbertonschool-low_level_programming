#include "main.h"
/**
 * _isalpha - prints a letter lowercase or uppercase
 *@c: variable
 *Return: 1 if is lowercase or uppercase else 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
