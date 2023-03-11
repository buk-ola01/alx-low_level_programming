/*
 * File: 100-change.c
 * Auth: Abdulsamad.
 */

#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to
 *	make change for an amount of money.
 * @argc: argument count.
 * @argv: arguments.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, cents;
	int coin_values[] = {25, 10, 5, 2, 1};
	int count = 0;
	int num_of_coins, num_coin_values;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
	}

	num_coin_values = sizeof(coin_values) / sizeof(int);
	for (i = 0; i < num_coin_values; i++)
	{
		num_of_coins = cents / coin_values[i];
		cents -= num_of_coins * coin_values[i];
		count += num_of_coins;
	}

	printf("%d\n", count);
	return (0);
}
