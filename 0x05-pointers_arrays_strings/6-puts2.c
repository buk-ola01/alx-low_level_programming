#include "main.h"
/**
 * puts2 - function that prints every other character of a string,
 *	starting with the first character
 * @str: - string to be printed
 */

void puts2(char *str)
{
	unsigned long int i;

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
