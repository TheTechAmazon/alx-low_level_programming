#include "main.h"

/**
 * read_textfile- this reads a text in the file
 * and prints the letters to STDOUT
 * @filename: this is the text filename being read
 * @letters: the numbers of letters to be read and printed
 *
 * Return: the actual numbers of letetrs read and printed
 * else return 0 when functions fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
