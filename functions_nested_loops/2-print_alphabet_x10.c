#include "main.h"

/**
 * print_alphabet_x10 - lower case
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char abc;
	int i = 0;

	while (i <= 9)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
		i++;
	}
}
