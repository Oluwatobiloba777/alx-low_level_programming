#include "main.h"
/**
 *_islower - it checks for lowercase ASCII characters
 *@c: This is an ASCII character
 *
 *Return: 0 if not lowercase, 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
