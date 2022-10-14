#include <stdio.h>
/**
 *main- it prints a-z except q and e
 *
 *Return: 0 if successful
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (!(a == 113 || a == 101))
			putchar(a);
	}
	putchar('\n');
	return (0);
}
