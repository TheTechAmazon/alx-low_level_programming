#include "main.h"
#include <unistd.h>

/**
 * _putchar - This project writes the character c to stdout in the digital infornmation.
 * @c: The character to print in the system
 *
 * Return: 1 is on success
 * On error, errno is appropriately set, and -1 is returned.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
