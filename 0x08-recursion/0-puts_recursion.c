#include "main.h"

/**
 * _puts_recursion - print a string and then a new line
 * @s: character or string to print
 *
 * Return: return void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
