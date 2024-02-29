#include "main.h"
/**
 *_strncpy - entry point
 *@dest: variable point
 *@src: variable second point
 *@n: variable digit
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	while (src[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < n && src[j] != '\0'; i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
