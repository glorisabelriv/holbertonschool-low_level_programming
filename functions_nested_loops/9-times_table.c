#include "main.h"
/**
 * times_table - entry point
 * Description: prints 9 times table
 *Return: 0
 **/
void times_table(void)
{
	int num, mult, prod;
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
