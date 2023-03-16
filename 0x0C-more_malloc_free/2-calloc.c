/*
 * File: 2-calloc.c
 * Auth: Abdulsamad.
 */

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array using calloc.
 * @nmemb: no of element in array
 * @size: size in byte of each element.
 *
 * Return: Pointer to the allocated memory
 *	Otherwise - NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = calloc(nmemb, size);

	if (array == NULL)
		return (NULL);

	return (array);
}
