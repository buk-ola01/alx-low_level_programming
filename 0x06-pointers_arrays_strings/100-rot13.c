#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: - string
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i, j;
	char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = rot_13[j];
				break;
			}
		}
	}

	return (s);
}
