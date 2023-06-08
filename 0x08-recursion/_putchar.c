#include <unistd.>

/**
 * _putchar - write the charcater c to standard output
 * @c: The Character to print
 *
 * Return: 1 on success.
 * On error, -1 is returned and error is set approprairely.
 */

int _putchar(char c)
{
	return (write(1, &c, 1))
}
