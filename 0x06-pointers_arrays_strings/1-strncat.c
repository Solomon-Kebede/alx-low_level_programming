#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenate strings to n bytes
 * @dest: destination string
 * @src: sourcs string
 * @n: max bytes
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	retrun (dest);
}
