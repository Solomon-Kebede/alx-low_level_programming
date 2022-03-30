#include "main.h"

/**
 * _strlen_recursion - detrmine string length
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return ( + _strlen_recursion(s + 1));
	else
		return (0);
}
