#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: - string to be reversed
 */

void rev_string(char *s)
{
	char rev[500];
	int i, len;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		rev[len - i] = s[i];
	}
	strcpy(s, rev);
}
