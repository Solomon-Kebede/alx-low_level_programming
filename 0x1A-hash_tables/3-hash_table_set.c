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
    node = malloc(sizeof(hash_node_t *));
    if (node == NULL)
        return (0);

    /* get index to store value based of hashed key */
    index = key_index((unsigned char *)key, ht->size);
    /* if the value at a specific index is empty */
    if (ht->array[index] == NULL)
    {
        /* set the value */
        /* printf("%s\n", (char *)value);*/
        /* assign the respective values */
        node->key = strdup(key);
        node->value = strdup(value);
        node->next = NULL;
        ht->array[index] = node;
    }
    
    return 1;
}
