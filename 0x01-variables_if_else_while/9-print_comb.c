/*
 * File: 9-print_comb.c
 * Auth: Abdulsamad.
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints all possible combinations of
 *	single-digit numbers
 * Return: Always 0.
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);

	return (0);
}
