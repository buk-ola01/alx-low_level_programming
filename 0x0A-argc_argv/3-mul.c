/*
 * File: 3-mul.c
 * Auth: Abdulsamad.
 */

#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: No of arguements.
 * @argv: Array of pointers
 *
 * Return: If the program receives two arguments - 0.
 *	If the program does not recieve two arguments - 1.
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
