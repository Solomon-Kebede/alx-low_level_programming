#include "main.h"

/**
 * rev_string - prints a string and its reverse followed by new lines
 * @s: pointer to character
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp1 = s[0];

	while (s[i])
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		temp1 = s[j];
		s[j] = s[i];
		s[i] = temp1;
	}
}
