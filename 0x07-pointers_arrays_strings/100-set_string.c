/*
 * File: 100-set_string.c
 * Auth: Abdulsamad.
 */

#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: poniter to change
 * @to: string to change pointer to
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
