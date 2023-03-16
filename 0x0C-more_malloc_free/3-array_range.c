/*
 * File: 3-array_range.c
 * Auth: Abdulsamad;
 */

#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: Pointer to the newly created array.
 *	Otherwise - NULL.
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		array[i] = min + i;

	return (array);
}
