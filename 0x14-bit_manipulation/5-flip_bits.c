#include "main.h"

/**
 *flip_bits-returns the number of bits you would need to flip to get from
 *one number to another
 *@n:number
 *@m:numner
 *
 *Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a = 0;
	unsigned long int b;

	b = n ^ m;
	while (b)
	{
		a += b & 1;
		b = b >> 1;
	}
	return (a);
}
