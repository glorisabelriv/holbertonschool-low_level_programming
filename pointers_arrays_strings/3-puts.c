#include "main.h"
/**
 *_puts - prints a sting
 *@str: variable
 **/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
