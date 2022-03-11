#include <stdio.h>

/**
 * main - print comma separated single digits
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
		{
			putchar('\n');
		}
		else
		{
			putchar(44);
			putchar(' ');
		}
	}
	return (0);
}
