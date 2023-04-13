#include "hash_tables.h"

/**
 * hash_table_create - create a new hashtable
 * @size: integer size of the array
 *
 * Return: new array
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* declare a new hashtable */
	hash_table_t *new_array;

	new_array = malloc(size * sizeof(hash_table_t));
	if (new_array == NULL)
		return (NULL);

	return (new_array);
}
