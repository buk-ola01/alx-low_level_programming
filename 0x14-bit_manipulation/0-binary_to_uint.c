#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 *
 * Return: Converted decimal number
 *	Otherwise - NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		dec <<= 1;
		if (b[i] == '1')
			dec += 1;
	}

	return (dec);
}
