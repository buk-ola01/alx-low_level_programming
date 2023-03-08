/*
 * File: 5-sqrt_recursion.c
 * Auth: Abdulsamad.
 */

#include "main.h"

int find_sqrt(int num, int root);

/**
 * find_sqrt - finds the natural square root of a given number
 * @num: number to find square root of
 * @root: root to be tested
 *
 * Return: if the number has a natural square root - the square root
 *	if the number does not have a natural square root - (-1)
 */

int find_sqrt(int num, int root)
{
	if (root * root == num)
		return (root);

	if (root * root > num)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number
 *
 * Return: if n has a natural square root - square root of @n
 *	if n does not have a natural square root - (-1)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
