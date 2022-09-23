#include "main.h"

/**
 * *_strncpy - Entry point
 * @dest: destination string
 * @src: string to be copied
 * @n: number of bytes
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (dest != '\0')
		j++;
	if (j < n)
		dest = src;
	
	return (dest);
}
