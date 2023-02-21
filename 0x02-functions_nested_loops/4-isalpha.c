#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 *
 * @c: - character to be checked.
 *
 * Return: 1 (letter, lowercase, uppercase), 0 (otherwise)
 */

int _isalpha(int c)
{
	int i;
	int j;

	for (i = 65; i <= 91; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}

	for (j = 97; j <= 122; j++)
	{
		if (j == c)
		{
			return (1);
		}
	}

	return (0);
}
