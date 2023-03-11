/*
 * File: 1-args.c
 * Auth: Abdulsamad.
 */

#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: no of arguments
 * @argv: array of pointers
 *
 * Return: Always 0(Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));

	return (0);
}
