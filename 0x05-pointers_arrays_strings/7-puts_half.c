#include "main.h"
/**
 * puts_half -  function that prints half of a string, followed by a new line.
 * @str: - string to be used
 */

void puts_half(char *str)
{
	int n, i, len;

	len = strlen(str);
	if (len % 2 == 1)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
