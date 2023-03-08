/*
 * File 2-strlen_recursion.c
 * Auth/: Abdulsamad.
 */

#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	len = 1 +  _strlen_recursion(s + 1);
	return (len);
}
