/*
 * File: 0-mallloc_checked.c
 * Auth: Abdulsamad.
 */

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: memory to be allocated
 *
 * Return: Pointer to the allocated memory
 *	Otherwise - function should cause normal process termination with
 *	a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(EXIT_FAILURE);
	}

	return (ptr);
}
