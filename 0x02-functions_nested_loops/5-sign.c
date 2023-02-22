#include <stdio.h>
#include <limits.h>
/**
* Write a function that prints the sign of a number
* print_sign - prints the sign of a number.
* @n: the number to check.
* Return: 1 if n is positive, -1 if n is negative, 0 if n is zero.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar ('-');
		return (-1);
	}
}


/**
* This program includes functions to determine the sign of a number.
* This file includes a helper function for determining the sign of a number.
* This function takes an integer input and calls the print_sign function to print its sign to the console. 
* It returns nothing
*/

void print_sign_function()
{
	print_sign(98);       /* Output: + */
	print_sign(0);        /* Output: 0 */
	print_sign(0xff);     /* Output: + */
	print_sign(-1);       /* Output: - */
	print_sign(99);       /* Output: + */
	print_sign(INT_MAX);  /* Output: + */
	print_sign(INT_MIN);  /* Output: - */
	print_sign(-4);       /* Output: - */
}
