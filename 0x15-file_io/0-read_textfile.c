#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read Text File Print to STDOUT.
 * @letters: Number of Letters to Read
 * @filename: Text File being Read
 * Return: w- Actual Number of Bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t ff;
	ssize_t w;
	ssize_t t;

	ff = open(filename, O_RDONLY);
	if (ff == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(ff, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(ff);
	return (w);
}
