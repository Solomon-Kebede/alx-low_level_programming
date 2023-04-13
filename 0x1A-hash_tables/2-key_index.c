#include "hash_tables.h"
/**
 * key_index - gives the index of a key.
 * @key: key to be searched in hashtable
 * @size: the size of the array of the hash table
 * Return: the index at which the key/value pair should be
 * stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* the modulus of the result of the hash function / the array size */
	return (hash_djb2(key) % size);
}
