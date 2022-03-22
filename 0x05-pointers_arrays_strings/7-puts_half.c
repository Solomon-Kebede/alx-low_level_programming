#include "main.h"

/**
 * puts_half - print second half of string
 * @str: pointer to character
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	i = (i - 1) / 2;

	while (str[++i])
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
