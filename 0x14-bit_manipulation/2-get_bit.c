#include "main.h"
#include <stdio.h>

/**
 * get_bit - To get the vlue of a bit at a given index to unsigned int
 * @n: The number to evaluate char string
 * @index: Index starting from 0, of the bit.
 * Return: The value of bit at index, or -1 if no success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (i > 64)
		return (-1);

	hold = n >> i;

	return (hold & 1);
}
