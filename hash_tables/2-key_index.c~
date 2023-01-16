#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: unsigned long int
 * Return: n
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));

	if (size == 0 || new == NULL)
		return (NULL);

	new->array = malloc(sizeof(hash_node_t *) * size);

	new->size = size;
	return (new);
}
