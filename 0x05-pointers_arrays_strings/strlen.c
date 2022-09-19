#include "main.h"

/**
 * _strlen - ENtry point
 * @s string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}
