#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: - string
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, j;
	char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = leet[j];
			}
		}
	}

	return (s);
}
