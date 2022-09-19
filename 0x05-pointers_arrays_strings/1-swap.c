#include "main.h"

/**
 * swap_int - Entry point
 * @a: first pointer
 * @b: second pointer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
