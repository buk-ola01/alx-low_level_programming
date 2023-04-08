#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long int.
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		printf("%c", (n & 1) ? '1' : '0');
	}
	else
	{
		printf("%c", '0');
	}
}
