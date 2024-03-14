#include "function_pointers.h"
/**
 *print_name - entry point function
 *@name: char variable
 *@f: pointer
 **/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
