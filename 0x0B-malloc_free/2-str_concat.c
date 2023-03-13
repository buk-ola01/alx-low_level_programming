/*
 * File: 2-str_concat.c
 * Auth: Abdulsamad.
 */

#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: on failure - NULL
 *	Otherwise - Pointer to the newly allocated space in memory
 *			containing the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	concat = (char *)malloc((len1 + len2) + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		concat[i] = s1[i];
	}

	for (i = len1, j = 0; s2[j] ; i++, j++)
	{
		concat[i] = s2[i - len1];
	}
	concat[i] = '\0';

	return (concat);
}
