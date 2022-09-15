#include "main.h"

/**
 * print_numbers - Entry point
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
		_putchar((i % 10) + '0');
	_putchar('\n');
}
