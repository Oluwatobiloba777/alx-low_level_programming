#include "main.h"

/**
 *_strncat- concatenates two strings
 *@dest:string to be concatenated to
 *@src: string to be concatenated
 *@n: number of bytes
 *
 *Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, dest_len = 0, src_len = 0;

	while (dest[src_len] != '\0')
	{
		dest_len++;
		src_len++;
	}

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[dest_len + a] = src[a];
	}
	dest[dest_len + a] = '\0';

	return (dest);
}
