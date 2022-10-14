#include <stdio.h>
/**
 *main- it prints a-z in lowercases however in reverse
 *
 *Return: 0 if successful
 */
int main(void)
{
	int a;

	for (a = 122; a >= 97; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
