/*
 * File: 3-strspn.c
 * Auth: Abdulsamad.
 */

#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: the string to be searched
 * @accept: the prefix to be measured
 *
 * Return: the no of bytes in s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, bytes = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				bytes++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (bytes);
	}

	return (bytes);
}
