#include <stdio.h>
/**
 * main - print each lower case characters of alphabet
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
