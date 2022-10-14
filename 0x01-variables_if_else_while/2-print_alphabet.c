#include <stdio.h>
/**
 *main-it prints a-z in lowercases
 *
 *Return: 0 if successful
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
