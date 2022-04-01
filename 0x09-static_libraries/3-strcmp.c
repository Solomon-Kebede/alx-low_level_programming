#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first character
 * @s2: second character
 * Return: 0 if s1 and s2 are the same;
 * less than 0 if s1<s2;
 * greater than 0 if s1>s2.
 */

int _strcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}
