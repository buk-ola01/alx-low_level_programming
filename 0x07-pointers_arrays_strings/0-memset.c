/*
 * File: 0-memset.c
 * Auth: Abdulsamad.
 */

#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @b: the character to fill the memory area with
 * @n: no of bytes contained in s.
 *
 * Return: A pointer to the filled memory @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
