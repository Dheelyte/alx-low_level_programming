#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int ch;

	int ach;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ach = 'A'; ach <= 'Z'; ach++)
		putchar(ach);
	putchar('\n');
	return (0);
}
