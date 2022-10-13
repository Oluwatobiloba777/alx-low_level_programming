#include <stdio.h>
/**
 *main -it prints sizes in bytes of C data types
 *
 *
 *Return: 0 if successful
 */
int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of a int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
