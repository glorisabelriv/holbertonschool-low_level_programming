#include "main.h"
/**
 *_strncat - entry point
 *@dest: variable
 *@src: variable
 *@n: variable int
 *Return: dest
 **/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
int n = src[j];

dest[i] = src[j];
i++;
j++;
}
return (dest);
}

