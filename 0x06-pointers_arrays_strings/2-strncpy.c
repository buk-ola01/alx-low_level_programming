#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: - destination to be copied to.
 * @src: -  source to be copied from.
 * @n: - no of byetes to copy from src.
 *
 * Return: dest value.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
