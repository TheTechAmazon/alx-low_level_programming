#include "main.h"
/**
 * main - This copy the contents of one file to the other.
 * @argc: Number of arguments in a program
 * @argv: Vector argument(an array of argument)
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, r, b, t;
	char BUFF[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(file_from, BUFF, BUFSIZ)) > 0)
	{
		if (file_to < 0 || write(file_to, BUFF, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	b = close(file_from);
	t = close(file_to);
	if (b == -1 || t == -1)
	{
		if (b == -1)
			dprintf(STDERR_FILENO, "Error can't close fd %d\n", file_from);
		if (t == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
