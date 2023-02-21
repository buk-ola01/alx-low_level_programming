#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 *
 * @n: - Number to be used
 *
 * Return: n (Positive), n*-1 (negative), 0 (zero)
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}
}

