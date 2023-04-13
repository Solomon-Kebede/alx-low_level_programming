#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: key you are looking for
 * Return: the value associated with the
 * element, or `NULL` if `key` couldn’t be found
 * compile: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c\
 * 0-hash_table_create.c 1-djb2.c 2-key_index.c\
 * 3-hash_table_set.c 4-hash_table_get.c -o e
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	/* Check if hash table and key are valid */
	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	/* get index to store value based of hashed key */
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
