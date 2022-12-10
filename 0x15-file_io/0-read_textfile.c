#include "main.h"

/**
  * read_textfile -reads a text file
  * @filename:filename
  * @letters: Number of letters to reads
  *
  * Return:number of letters it reads
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a, read_file;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	a = open(filename, O_RDONLY, 0600);
	if (a == -1)
		return (0);

	read_file = read(a, buff, letters);
	write(STDOUT_FILENO, buff, read_file);

	free(buff);
	close(a);
	return (read_file);
}
