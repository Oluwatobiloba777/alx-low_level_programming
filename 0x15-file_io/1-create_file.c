#include "main.h"

/**
 * create_file-creates a text file
 * @filename:file name
 * @text_content:content to be written in the file
 *
 * Return:1 if succesful if not -1
 */
int create_file(const char *filename, char *text_content)
{
	int a, len;

	if (!filename)
		return (-1);

	a = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (a == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		write(a, text_content, len);
	}

	close(a);
	return (1);
}
