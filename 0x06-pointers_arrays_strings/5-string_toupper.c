#include "main.h"

/**
 * string_toupper -  Changes all lowercase letters of a string to uppercase.
 * @s: - string to be changed
 * Return: char
 */

char *string_toupper(char *s)
{
	int i, delt;

	i = 0;
	delt = 'a' - 'A';
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= delt;
		}
		i++;
	}

	return (s);
}
