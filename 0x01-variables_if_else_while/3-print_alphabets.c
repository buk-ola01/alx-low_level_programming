/*
 * File: 3-print_alphabets.c
 * Auth: Abdulsamad.
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 *	followed by a new line.
 *
 * Return: Always 0.
*/
int main(void)
{
	int i, j;

	i = 97;
	j = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar(10);

	return (0);
}
