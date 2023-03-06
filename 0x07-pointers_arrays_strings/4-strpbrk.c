/*
 * File: 4-strpbrk.c
 * Auth: Abdulsamad.
 */

#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string to be searched
 * @accept: set of bytes to be searched for
 *
 * Return: if a set is matched - pointer to the matched byte
 *	if no set is matched - NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}

	return ('\0');
}
