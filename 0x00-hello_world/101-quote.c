/*
 * File: 101-quote.c
 * Auth: Abdulsamad
 * Desc: Prints "and that piece of art is useful" - Dora Korpar,2015-10-19",
 *	followed by a new line, to standard error.
 */

#include <unistd.h>

/**
  * main - Entry point
  *
  * Return: Always 1 (Success)
  */
int main(void)
{
	write(2,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		59);

	return (1);
}
