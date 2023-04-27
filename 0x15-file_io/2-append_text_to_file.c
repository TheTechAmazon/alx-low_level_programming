#include "main.h"

/**
 * append_text_to_file - This appends the text to the end of the file.
 * @filename: This is the pointer to the name of the file
 * @textcontent: the string to add to the content of the file
 *
 * return: if the file exist 1
 * if the file does not exist -1
 * if the function fails or filename is NULL -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return(-1);
	
	fd = open(filename, O_WRONLY | O_APPEND);
	
	if (fd == -1)
		
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++);

		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
