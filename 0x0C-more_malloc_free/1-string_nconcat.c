#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  Entry point
 *@s1: string
 *@s2: string
 *@n: int
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c, d;
	char *p;

	if (s1 == NULL)
		a = 0;
	else
		for (a = 0 ; s1[a] ; a++)
		{}
	if (s2 == NULL)
		b = 0;
	else
		for (b = 0 ;  s2[b]; b++)
		{}
	if (n >= b)
		n = b;
	c = a + n + 1;
	p = malloc(a * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (d = 0; d < a ; d++)
		p[d] = s1[d];
	for (d = 0; d < n; d++)
		p[d + a] = s2[d];
	p[a + n] = '\0';
	return (p);
}
