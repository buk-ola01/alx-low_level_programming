/*
 * File: 0-puts_recursion.c
 * Auth: Abdulsamad.
 */

#include "main.h"
#include <string.h>

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
