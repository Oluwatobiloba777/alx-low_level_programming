#include "main.h"


/**
 * main - This prints multiplication of 2 numbers
 * @argc:argument count
 * @argv:argument vector
 *
 * Return:0 if successful
 */
int main(int argc, char **argv)
{
	int i, j;
	unsigned long num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	num1 = atol(argv[1]);
	num2 = atol(argv[2]);

	printf("%lu\n", num1 * num2);

	return (0);
}
