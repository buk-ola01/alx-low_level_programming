/*
 * File: 100-argstostr.c
 * Auth: Abdulsamad.
 */

#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument variable
 *
 * Return: On failure - NULL
 *	Otherwise - pointer to a new string.
 */

char *argstostr(int ac, char **av)
{
	int i, j, pos, len;
	char *new_string;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	len += ac;
	new_string = (char *)malloc((len + 1) * sizeof(char));

	if (new_string == NULL)
		return (NULL);

	pos = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			new_string[pos] = av[i][j];
			pos++;
		}
		new_string[pos] = '\n';
		pos++;
	}
	new_string[pos] = '\0';

	return (new_string);
}
