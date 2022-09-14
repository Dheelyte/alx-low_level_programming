#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: number to be checked
 * Return: last digit
 */

int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
