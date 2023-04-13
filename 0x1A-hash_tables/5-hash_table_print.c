#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: void
 * result: print the key/value in the order
 * that they appear in the array of hash table
 * compile: gcc -Wall -pedantic -Werror -Wextra\
 * -std=gnu89 5-main.c 0-hash_table_create.c 1-djb2.c\
 * 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c\
 * 5-hash_table_print.c -o f
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	unsigned int count = 0;

	if (ht != NULL)
	{
		printf("{");
		for (index = 0; index <= ht->size; index++)
		{
			if (ht->array[index])
			{
				/* printf("\ncount = %d\n", count); */
				printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
				printf(", ");
				count++;
			}
		}
		if (count > 0)
			printf("\b\b");
		printf("}\n");
	}
}
