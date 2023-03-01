#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: - destination of the concat
 * @src: - source
 * @n: - no of bytes to use from src
 *
 * Return: dest value
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{
	}
	for (j = 0; src[j] != src[n]; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);
}
