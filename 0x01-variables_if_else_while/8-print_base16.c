/*
 * File: 8-print_base16.c
 * Auth: Abdulsamad.
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase,
 *	followed by a new line.
 * Return: Always 0.
*/
int main(void)
{
	int i, alpha;

	for (i = 0; i <= 9; i++)
		putchar((i % 10) + '0');
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar(10);

	return (0);
}
