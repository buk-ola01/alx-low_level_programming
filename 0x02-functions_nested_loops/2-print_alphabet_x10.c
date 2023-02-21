#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		i++;
	}
	_putchar(10);
}
