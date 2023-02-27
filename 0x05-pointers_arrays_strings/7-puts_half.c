#include "main.h"
/**
 * puts_half -  function that prints half of a string, followed by a new line.
 * @str: - string to be used
 */

void puts_half(char *str)
{
	int n, i, len;

	len = strlen(str);
	if (len % 2 != 0)
	{
		n = (strlen(str) - 1) / 2;
	}
	else
	{
		n = strlen(str) / 2;
	}
	for (i = n; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
