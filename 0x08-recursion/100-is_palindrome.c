#include "main.h"

/**
 *_strlen_recursion- get length of a string
 *@s: string
 *
 *Return: string length
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s != 0)
	{
		a = _strlen_recursion(s + 1);
		return (++a);
	}

	return (a);
}

/**
 *check_palindrome- check if a string is a palindrom
 *@s: string
 *
 *Return: int
 */

int check_palindrome(char *s)
{
	int b = _strlen_recursion(s) - 1;

	if (*s == s[b])
	{
		s++;
		b--;
	}
	else
	{
		return (0);
	}
	return (1);
}

/**
 *is_palindrome-returns if a string is a palindrome
 *@s: string
 *
 *Return: int
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_palindrome(s - 1));
}
