/*
 * File: 2-int_index.c
 * Auth: Abdulsamad.
 */

#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: The array of integers.
 * @size: Yhe size of the array.
 * @cmp: A pointer to the function to be used to compare.
 *
 * Return: If no element matches or size <= 0 - -1.
 *	Otherwise - The index of the first element for which the cmp
 *	function does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
