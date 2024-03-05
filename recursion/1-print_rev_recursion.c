#include "main.h"
/**
 *_print_rev_recursion - entry point print string rev
 *@s: char len
 *Return: s
 **/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
	_putchar(*s);
}
}
