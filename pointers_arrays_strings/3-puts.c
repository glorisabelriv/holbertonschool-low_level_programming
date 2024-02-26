#include "main.h"
/**
 *_puts - prints a sting
 *@str: variable
 **/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	i++;
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
