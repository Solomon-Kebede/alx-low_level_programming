#include "main.h"

/**
 * _memcpy - copies buffer
 * @dest: the pointer of memory to print
 * @src: the character of memory to print
 * @n: the size of the memory to print
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
