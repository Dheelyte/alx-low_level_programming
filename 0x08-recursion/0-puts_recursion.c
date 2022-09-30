#include "main.h"

/**
 * _puts_recursion - Print a string, followed by new line
 * @s: String to be printed
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	return (0);
}
