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
	int i;
	int sl1 = strlen(s1);
	int sl2 = strlen(s2);

	/* allocate for '\0' once */
	str = malloc(sizeof(char) * (sl1 + sl2 + 1));

	for (i = 0; i < sl1; i++)
		str[i] = s1[i];

	for (i = 0; i < sl2; i++)
		str[i + sl1] = s2[i];

	str[sl1 + sl2] = '\0';
	return (str);
}
