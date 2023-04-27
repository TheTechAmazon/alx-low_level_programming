#include "main.h"

/**
 * get_endianness - Checks whether a device or system or machine
 * is little or big endian.
 * Return: 1 if it is a little endian, or 0 if it is a big endian.
 */
int get_endianness(void)
{
	int n;

	n = 1;
	if (*(char *)&n == 1)
		return (1);
	else
		return (0);
}
