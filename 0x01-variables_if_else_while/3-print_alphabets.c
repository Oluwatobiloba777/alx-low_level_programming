#include <stdio.h>
/**
 *main-it prints a-z in lowercases and upper cases
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
	for (a = 65; a <= 90; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
