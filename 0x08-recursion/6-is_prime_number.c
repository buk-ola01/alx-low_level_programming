/*
 * File: 6-is_prime_number.c
 * Auth: Abdulsamad.
 */

#include "main.h"
int is_divisible(int num, int div);

/**
 * is_divisible - checks if a number is divisible
 * @num: number to be checked
 * @div: divisor
 *
 * Return: If the number is divisible - 0
 *	If the number is not divisible - 1
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}
	if (div == num / 2)
	{
		return (1);
	}

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - check for prime number
 * @n: number to be checked
 *
 * Return: If input is a prime number - 1
 *	If input is not a prime number - 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}

	return (is_divisible(n, 2));
}
