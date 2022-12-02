#include "main.h"

/**
 * binary_to_uint-coverts binary number to unsigned int
 *@b: binary pointer
 *
 *Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int c = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[c])
	{
		if (b[c] == '1')
		{
			a = a << 1;
			a = a | 1;
		}
		else if (b[c] == '0')
		{
			a = a << 1;
		}
		else
		{
			return (0);
		}
		c++;
	}
	return (a);
}
