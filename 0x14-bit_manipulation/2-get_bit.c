#include "main.h"
#include <stdio.h>

/**
 * get_bit - To get the value of a bit at a given index
 * in a decimal number to unsigned int
 * @n: The number to evaluate or search in char string
 * @index: Index starting from 0, of the bit.
 * Return: The value of bit at index, or -1 if no success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
