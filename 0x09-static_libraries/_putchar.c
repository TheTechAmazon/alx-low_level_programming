include <unistd.h>

/**
 * _putchar - this write the character c to standout
 * @c: The character to print
 *
 * Return: return 1 on success
 * On error, return -1, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
