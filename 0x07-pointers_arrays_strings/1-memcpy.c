/*
 * File: 1-memcpy.c
 * Auth: Abdulsamad.
 */

#include "main.h"

/**
 * _memcpy - function that copies n bytes from memory area @src to @dest
 * @n: the no of byte to copy from @src
 * @src: the memory area to copy from
 * @dest: the memory area to copy to
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
