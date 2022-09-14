#include "main.h"

/**
 * _isalpha - Entry Point
 * @c: Character to be checked
 * Return: 1 if character is an alphabet, else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
