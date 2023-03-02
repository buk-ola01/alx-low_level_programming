#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @s: - string
 * Return: the capitalized string
 */

char *cap_string(char *s)
{
	int i = 0, j;
	char sep[] = {'\n', '\t', ' ', '.', ',', ';', '!', '?', '"', '(', ')',
		'{', '}'};

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] -= 'a' - 'A';
			}
			else
			{
				for (j = 0; j < 13; j++)
				{
					if (sep[j] == s[i - 1])
					{
						s[i] -= 'a' - 'A';
					}
				}
			}
		}
		i++;
	}

	return (s);
}
