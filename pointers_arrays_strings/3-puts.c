#include "main.h"
/**
 *_puts - prints a sting
 *@str: function that prints a string
 *Return: void
 **/
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
