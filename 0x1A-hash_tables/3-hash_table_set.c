#include "hash_tables.h"
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

	/* Check if hash table and key are valid */
	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	/*allocate memory */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	/* get index to store value based of hashed key */
	index = key_index((unsigned char *)key, ht->size);

	/* update the value to new if collision */
	if (ht->array[index] != NULL)
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			ht->array[index]->value = strdup(value);
			return (1);
		}

	node->key = strdup(key);
	node->value = strdup(value);

	if (ht->array[index] == NULL)
		node->next = NULL;
	else
		node->next = ht->array[index];

	ht->array[index] = node;

	return (1);
}
