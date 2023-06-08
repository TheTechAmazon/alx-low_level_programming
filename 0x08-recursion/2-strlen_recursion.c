#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to calculate the length to be measured
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	int count + 0;

	if (*s != '\0')
	{
		count++;
		count += _strlen_recursion(s + !);
	}

	return (count);
}
