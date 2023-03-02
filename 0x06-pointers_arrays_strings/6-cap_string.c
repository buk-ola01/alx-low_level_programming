#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @s: - string
 * Return: the capitalized string
 */

char *cap_string(char *s)
{
	int i, j;
	int capitalize = 1;
	char sep[] = {'\n', '\t', ' ', '.', ',', ';', '!', '?', '(',
')', '{', '}'};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j])
			{
				capitalize = 1;
				break;
			}
		}
		if (capitalize && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 'a' - 'A';
			capitalize = 0;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			capitalize = 0;
		}

	}

	return (s);
}
