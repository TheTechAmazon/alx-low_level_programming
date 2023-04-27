#include "main.h"

/**
 * set_bit - It sets the value of a bit to 1
 * at a given index in an unsigned int
 * @n: the decimal number passed by a pointer in the char string
 * @index: The index position to change, starting from 0
 * Return: -1 if unsuccesful and 0 if it works.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}