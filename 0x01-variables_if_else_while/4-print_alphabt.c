/*
 * File: 4-print_alphabt.c
 * Auth: Abdulsamad.
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e,
 *	followed by a new line.
 * Return: Always 0.
*/
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if ((i != 101) && (i != 113))
		putchar(i);
	}
	putchar(10);

	return (0);
}
