#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key:  is the key, it can not be an empty string
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	/*allocate memory */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	/* get index to store value based of hashed key */
	index = key_index((unsigned char *)key, ht->size);

	node->key = strdup(key);
	node->value = strdup(value);

	if (ht->array[index] == NULL)
		node->next = NULL;
	else
		node->next = ht->array[index];

	ht->array[index] = node;

	return (1);
}
