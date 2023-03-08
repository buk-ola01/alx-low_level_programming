/*
 * File: 100-is_palindrome.c
 * Auth: Abdulsamad.
 */

#include "main.h"
int find_len(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_len - finds the length of a string.
 * @s: string to be measured
 *
 * Return: The lenght of string
 */

int find_len(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);
	len = 1 + find_len(s + 1);

	return (len);
}

/**
 * check_palindrome - check if a string is palindrome
 * @s: string to be checked.
 * @len: length of string.
 * @index: index of string to be checked.
 *
 * Return: If string is a palindrome - 1
 *	If a string is not palindrome - 0
 */

int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - 1 - index])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - function that check if a srting is palindrome or not.
 * @s: string to be checked.
 *
 * Return: If the string is a palindrome - 1
 *	If the string is not a palindrome - 0
 */

int is_palindrome(char *s)
{
	int len = find_len(s);
	int index = 0;

	if (*s == '\0')
		return (1);

	return (check_palindrome(s, len, index));
}
