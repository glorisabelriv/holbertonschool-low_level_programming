#include "variadic_functions.h"
#include "stdio.h"
#include "stdarg.h"

/**
 *print_strings - function prints strings
 *@separator: char const pointer
 *@n: variable unsigned int
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;
	char *args;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		args = va_arg(a, char*);

		if (args)
		{
			printf("%s", args);
		}
		else
		{
			printf("(nil)");
		}

	if (i < (n - 1) && separator)
	{
		printf("%s", separator);
	}
	}
		printf("\n");
	va_end(a);
}
