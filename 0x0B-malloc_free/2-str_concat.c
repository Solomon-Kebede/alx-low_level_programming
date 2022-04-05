#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string pointer
 * @s2: string pointer
 *
 * Return: concatenated result or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, sl1, sl2;

	if (s1 == NULL)
	{
		s1 = '\0';
		sl1 = 0;
	}
	else
		sl1 = strlen(s1);
	if (s2 == NULL)
	{
		s2 = '\0';
		sl2 = 0;
	}
	else
		sl2 = strlen(s2);

	/* allocate for '\0' once */
	str = malloc(sizeof(char) * (sl1 + sl2 + 1));

	if (str)
	{
		for (i = 0; i < sl1; i++)
			str[i] = s1[i];

		for (i = 0; i < sl2; i++)
			str[i + sl1] = s2[i];

		str[sl1 + sl2] = '\0';
		return (str);
	}
	else
		return (0);
}
