#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - string duplicate
 * @str: pointer to string
 *
 * Return: new string pointer or NULL
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0;

	if (str == 0)
		return (0);

	s = malloc(sizeof(char) * strlen(str));

	if (s == 0)
		return (0);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
