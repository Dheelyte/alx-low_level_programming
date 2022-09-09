#include <stdio.h>

/**
 * main - Combination
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n % 10 + '0');
		if (n == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	return (0);
}
