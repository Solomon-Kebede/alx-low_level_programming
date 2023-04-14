#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: is the hash table
 * Return: void
 * compile: gcc -Wall -pedantic -Werror -Wextra 6-main.c\
 * 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c\
 * 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c -o g
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht != NULL)
	{
		for (index = 0; index < ht->size; index++)
		{
			while (ht->array[index])
			{
				node = ht->array[index]->next;
				free(ht->array[index]->key);
				free(ht->array[index]->value);
				free(ht->array[index]);
				ht->array[index] = node;
			}
		}
		free(ht->array);
		free(ht);
	}
}
