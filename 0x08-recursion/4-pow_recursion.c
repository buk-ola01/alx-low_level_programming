/*
 * File: 4-pow_recursion.c
 * Auth: Abdulsamad.
 */

#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to power of y.
 * @x: base
 * @y: power
 * Return: x raised to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y % 2 == 0)
	{
		return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
