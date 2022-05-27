#include <stdio.h>

/**
 * main - print triple digits w/o repeating
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (j > i && k > j)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i < 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
