#include "main.h"
/**
 * rev_string - reverse string
 *@s: variable
 *Return: void
 **/
void rev_string(char *s)
{
		int sindex, len = 0;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	{
		;
	}
	sindex = 0;
	len--;

	for (; sindex <= len; sindex++)
	{
		temp = s[sindex];
		s[sindex] = s[len];
		s[len] = temp;
		len--;
	}
}
