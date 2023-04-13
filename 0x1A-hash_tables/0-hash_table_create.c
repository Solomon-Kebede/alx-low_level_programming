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

	/* Invalid size or size == 0 */
	if (!size)
		return (NULL);

	/* memory allocation */
	new_array = malloc(sizeof(hash_table_t));

	if (new_array == NULL)
		return (NULL);

	new_array->size = size;
	new_array->array = malloc(size * sizeof(hash_node_t));
	if (!new_array->array)
	{
		/* free memory */
		free(new_array);
		return (NULL);
	}

	return (new_array);
}
