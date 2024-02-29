#include "main.h"
/**
 *_strcmp - entry point
 *@s1: variable
 *@s2: variable
 *Return: 0
 **/
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] && s2[i])
i++;
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
return (0);
}
