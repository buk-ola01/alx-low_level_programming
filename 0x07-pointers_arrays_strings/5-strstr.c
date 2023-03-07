/*
 * File: 5-strstr.c
 * Auth: Abdulsamad.
 */

#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: The string to be searched.
 * @needle: the substring to be located.
 *
 * Return: if the substring is found - a pointer to the beginning
 *					located substring.
 *		if the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; *(haystack + i); i++)
	{
		if (*(haystack + i) == *(needle))
		{
			for (j = 0; *(needle + j); j++)
			{
				if (*(haystack + i + j) != *(needle + j))
				{
					break;
				}
			}
			if (*(needle + j) == '\0')
			{
				return (haystack + i);
			}
		}
	}

	return ('\0');
}
