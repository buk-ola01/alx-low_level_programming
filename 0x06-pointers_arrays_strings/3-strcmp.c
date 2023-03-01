#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: - first string
 * @s2: - second string
 * Return: value of string
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i])
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
