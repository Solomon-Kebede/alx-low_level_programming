#include <stdio.h>
#include "main.h"

/**
 * _puts - print string followed by a new line
 * @str: pointer to character
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
