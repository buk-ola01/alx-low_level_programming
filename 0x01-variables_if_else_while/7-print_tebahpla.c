/*
 * File: 7-print_tebahpla.c
 * Auth: Abdulsamad.
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse,
 *	followed by a new line
 *
 * Return: Always 0.
*/
int main(void)
{
	int i;

	i = 122;
	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}
