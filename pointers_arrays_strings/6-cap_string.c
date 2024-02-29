#include "main.h"
/**
 *cap_string - capitalizes all words
 *@str: variable
 *Return: 0
 **/
char *cap_string(char *str)
{
	int i;
	int j;
	char sp_chr[] = {'\"', ' ', '?', '!', '\n', '\t', '(', ')', '.',
		'*', '+', '#', '%'};
	i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
		i++;
	}

	for (; str[i] != '\0'; i++)
	{
		for (j = 0; sp_chr[j] != '\0'; j++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (str[i - 1] == sp_chr[j])
				{
					if (str[i] >= 'a' && str[i] <= 'z')
					{
						str[i] = str[i] - 32;
					}
				}
				else if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] = str[i] + 32;
			}
		}
	}
	return (str);
}

