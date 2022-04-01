#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - string copy
 * @dest: destination string
 * @src: source string
 * @n: interger
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
