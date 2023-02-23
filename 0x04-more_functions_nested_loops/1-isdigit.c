#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through 9).
 *
 * @c: - character to be checked
 *
 * Return: 1(digit), 0(not a digit)
 */

int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
