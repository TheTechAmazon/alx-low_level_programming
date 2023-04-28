#include <unistd.h>

/**
 * _putchar - This writes the charcater c to stdout
 * @c: The character to print in stdout
 *
 * Return: On success 1, on error, -1 is returned, and erron is set.
 */

int _putchar(cahr c)
{
	return (write(1, &c, 1));
}
