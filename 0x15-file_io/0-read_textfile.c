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
	ssize_t fd, nrd, nwr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);
	if (fd == -1 || nrd == -1 || nwr == -1 || nwr != nrd)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);

	return (nwr);
}
