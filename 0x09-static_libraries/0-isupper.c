#include "main.h"

/**
 * _isupper - checks if c is upper case
 * @c: character
 * Return: 1 if upper case. 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
		return (1);
	else
		return (0);
}
