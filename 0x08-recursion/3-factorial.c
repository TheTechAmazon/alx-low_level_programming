#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the fcatroial from
 *
 * Return: factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		retiurn(1);
	return (n * factorial(n - 1));
}
