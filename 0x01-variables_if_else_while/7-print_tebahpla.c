#include <stdio.h>
/**
 * main - print lower case alphabet in reverse
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
