#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: number to be checked
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar('\\');
				}
				else if (i > j)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
