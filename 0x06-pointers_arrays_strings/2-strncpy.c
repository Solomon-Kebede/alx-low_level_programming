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
	n = n + 0;
	strcpy(dest, src);
	return (dest);
}
