#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @n: - number to find the last digit
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n > 0)
	{
		last_digit = n % 10;
		return (last_digit);
	}
	else if (n < 0)
	{
		last_digit = (n * -1) % 10;
		return (last_digit);
	}
	else
	{
		return (0);
	}
}
