#include "main.h"

/**
 * print_rev - Entry point
 * @s: string
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int i, j, len;

	i = 0;
	while (i != '\0')
		i++;

	len = i;

	for (j = len - 1; j >= 0; i--)
		_putchar(s[j]);
}