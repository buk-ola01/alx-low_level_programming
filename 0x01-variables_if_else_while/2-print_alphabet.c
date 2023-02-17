/*
 * File: 2-print_alphabet.c
 * Auth: Abdulsamad.
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase,
 *	followed by a new line.
 *
 * Return: Always 0.
*/
int main(void)
{
	int A;

	A = 97;
	while (A <= 122)
	{
		putchar(A);
		A++;
	}
	putchar(10);

	return (0);
}
