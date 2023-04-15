#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- this reads a text in the file
 * and prints the letters to STDOUT
 * @filename: this is the text filename being read
 * @letters: the numbers of letters to be read and printed
 *
 * Return: the actual numbers of letters read and printed
 * else return 0 when functions fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letetrs);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
