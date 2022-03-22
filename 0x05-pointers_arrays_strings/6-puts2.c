#include <stdio.h>
#include "main.h"

/**
 * puts2 - print every other string character followed by a new line
 * @str: pointer to character
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i])
	{
		i++;
	}
	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
