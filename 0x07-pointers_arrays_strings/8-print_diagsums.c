/*
 * File: 8-print_diagsums.c
 * Auth: Abdulsamad.
 */

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of a
 *	square matrix of integers.
 * @a: the matrix of integers
 * @size: the sixe of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size) + i);
		sum2 += *(a + (i * size) + (size - 1 - i));
	}

	printf("%i, %i\n", sum1, sum2);
}
