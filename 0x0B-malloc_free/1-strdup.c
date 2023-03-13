/*
 * File: 1-strdup.c
 * Auth: Abdulsamad.
 */

#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * strdup - function that returns a pointer to a newly allocated space in
 *	memory, which contains a copy of the string given as a parameter.
 * @str: string
 *
 * Return - If str is NULL, if insufficient memory was available - NULL
 *	Otherwise - returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i;
	char *new_string;

	if (*str == '\0')
	{
		return (NULL);
	}

	new_string = (char *)malloc(strlen(str) + 1);

	if (new_string == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		new_string[i] = str[i];
	}

	return (new_string);
}
