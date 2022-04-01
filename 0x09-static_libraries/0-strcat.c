#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate strings by appending
 * @dest: destination string
 * @src: source string
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
