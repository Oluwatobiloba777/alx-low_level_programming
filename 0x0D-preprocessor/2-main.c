#include <stdio.h>

/**
 *main- it prints name of the file it was compiled from
 *
 *Return:void
 */

int main(void)
{
	printf("%s\n",__BASE_FILE__);
	return (0);
}
