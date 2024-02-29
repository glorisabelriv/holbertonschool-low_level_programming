#include "main.h"
/**
 * *string_toupper - lowercase letter function
 *@str: pointers
 *Return: 0
 **/
char *string_toupper(char *str)
{

int i = 0;

for (; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
}
return (str);
}
