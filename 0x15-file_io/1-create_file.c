#include "main.h"

/**
 * create_file - This create a file
 * @filename; This is the filename to be created
 * @text_content: The content written in the file
 *
 * Return: -1 if the function fails otherwise 1 if the function succeed.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CRET | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_contwnt = "";

	for (nletters = 0; text_contwnt[nletters]; nletters++)
		;

	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
