/*
 * File: 2-args.c
 * Auth: Abdulsamad.
 */

#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @argc: No of arguments.
 * @argv: Array of pointers.
 *
 * Return: Always 0(Success).
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
