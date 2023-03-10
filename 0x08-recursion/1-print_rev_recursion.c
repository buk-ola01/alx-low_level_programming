/*
 * File: 1-print_rev_recursion.c
 * Auth: Abdulsamad.
 */

#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: string to be reversed.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
