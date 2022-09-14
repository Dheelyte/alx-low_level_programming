#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char a;

	int n;

	a = 'a';
	n = 0;

	while (n < 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		};
		n++;
	}
}
