#include "main.h"

/**
 *_strlen - Function to print lenght of a string
 *@s: string to print
 *Return: lenght of string
 **/
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
i++;
return (i);
}

