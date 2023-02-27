#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: - string to be reversed
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) ; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
