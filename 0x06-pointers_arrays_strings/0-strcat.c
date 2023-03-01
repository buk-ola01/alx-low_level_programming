#include "main.h"

/**
 * *_strcat -  function that concatenates two strings.
 *
 * @dest: - destination of the concat
 * @src: - source array to concat
 *
 * Return: dest value
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	
	i = strlen(dest);
	for (j = 0; src[j]; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
