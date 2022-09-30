#include "main.h"

/**
 * factorial - Prints factorial of a number
 * @n: number
 * Return: Fcatorial
 */

int factorial(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
