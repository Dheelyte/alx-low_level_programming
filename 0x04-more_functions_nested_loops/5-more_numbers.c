#include "main.h"

/**
 * more_numbers - ENtry point
 */

void more_numbers(void)
{
	int j, i;
	
	for (j = 0; j < 11; j++)
	{

		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
