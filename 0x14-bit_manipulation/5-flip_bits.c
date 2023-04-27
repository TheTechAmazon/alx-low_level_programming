#include "main.h"
#include <stdio.h>

/**
 * flip_bits - It counts the number of bits you would need to flip
 * to get from one number to the other in unsigned int
 * @n: The first number it takes in in an interger
 * @m: The second number it takes ijn to convert or compare to in a char string
 * Return: The number of bits that was needed to flip or change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}
	return (counter);
}
