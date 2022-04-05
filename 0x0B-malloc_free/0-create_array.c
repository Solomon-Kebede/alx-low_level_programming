#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of certain size
 * @size: - unsigned integer
 * @c: character
 *
 * Return: pointer to the array or NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	str = malloc((size) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
