#include "main.h"

/**
 *get_bit-returns value of a bit at a given index
 *
 *@n:unsigned long int input
 *@index:index
 *
 *Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
	{
		return (-1);
	}
	i = n >> index;
	return (i & 1);
}
