#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - This copy the contents of one file to the other.
 * @argc: number of arguments count
 * @argv: vector argument passed
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[1]), exit(98);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[2]), exit(99);
	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buffer, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(file_to, buffer, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
		dprintf(STDERR_FILENO, "Error can't close fd %d\n", file_from), exit(100);
	err_close = close(file_to);
	if (err_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
