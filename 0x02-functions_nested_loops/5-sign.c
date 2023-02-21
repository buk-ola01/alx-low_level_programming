#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 *
 * @n: - number to be checked
 *
 * Return: 1(+), 0(0), -1(-)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	} else if (n == 0)
	{
		return (0);
		_putchar(48);
	}
	else
	{
		return (-1);
		_putchar(45);
	}
}
