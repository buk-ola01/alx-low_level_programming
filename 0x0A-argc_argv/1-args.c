#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: no of arguments
 * @argv: array of pointers
 *
 * Return: Always 0(Success)
 */


int main(int argc, char *argv[])
{
	if (argc == 0)
	{
		printf("%d\n", argc);
	}
	else
	{
		printf("%d\n", (argc - 1));
	}

	return (0);
}
