/*
 * File: 1-string_nconcat.c
 * Auth: Abdulsamad.
 */

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string.
 * @s2: second string.
 * @n: no of byte to concat from @s2.
 *
 * Return: Pointer to the newly allocted space in memory
 *	Otherwise - NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1 = strlen(s1), len2 = strlen(s2);
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= len2)
		n = len2;

	concat = malloc((len1 + n) + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		concat[i] = s1[i];
	}
	for (i = len1, j = 0; j < n; i++, j++)
	{
		concat[i] = s2[i - len1];
	}

	concat[i] = '\0';

	return (concat);
}
