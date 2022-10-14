#include <stdio.h>
/**
 *main- it prints all numbers of base 16 in lowercase
 *
 *Return: 0 if successfull
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (a = 97; a <= 102; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
