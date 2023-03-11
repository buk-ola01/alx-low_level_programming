/*
 * File: 4-add.c
 * Auth: Abdulsamad.
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that adds positive numbers.
 * @argc: argument count.
 * @argv: Arguments
 *
 * Return: If one of the number contains symbols that are not digits - 1
 *	Otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, j;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
