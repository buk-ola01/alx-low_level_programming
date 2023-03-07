/*
 * File: 2-strchr.c
 * Auth: Abdulsamad.
 */

#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @c: character to serach for in @s
 * @s: string to be searched
 *
 * Return: if c is found - Pointer to the first occurence
 *	if c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) >= '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
