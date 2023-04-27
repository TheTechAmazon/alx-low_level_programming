#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Ti set the value of a bit to 0 at a givern task to unsigned int
 * @n: A pointer the the decimal number to chnage the char string.
 * @index: The index position of the bit you want to change
 * Return: -1 if it not successful and 1 if it works
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int hold;

	if (ind > 64)
		return (-1);
	hold = ind;
	for (i = 1; hold > 0; i *= 2, hold--)
		;

	if ((*n >> ind) & 1)
		*n -= i;

	return (1);
}
