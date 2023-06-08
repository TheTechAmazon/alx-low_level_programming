#include "main.h"

/**
 * _puts_recursion - print a string and then a new line
 * @s: string to print
 *
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s);
}
