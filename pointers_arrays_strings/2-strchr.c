#include "main.h"
/**
 *_strchr - entry point
 *@s: pointer
 *@c: char
 *Return: Pointer s
**/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
