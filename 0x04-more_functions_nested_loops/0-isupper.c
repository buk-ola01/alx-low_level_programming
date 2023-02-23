#include "main.h"
/**
 * _isupper -  function that checks for uppercase character.
 *
 * @c: - character to be checked
 *
 * Return: 1(uppercae), 0(not uppercase)
 */

int _isupper(int c)
{
	int i;

	for (i = 65; i <= 91; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
