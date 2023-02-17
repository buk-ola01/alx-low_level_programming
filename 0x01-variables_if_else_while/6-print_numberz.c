/*
 * File: 6-print_numberz.c
 * Auth: Abdulsamad.
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints all single digit numbers of base 10
 *	starting from 0, followed by a new line.
 * Return: Always 0.
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	putchar(10);

	return (0);
}
