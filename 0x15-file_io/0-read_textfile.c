#include "main.h"
#include <stdlib.h>

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
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(cahr) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
