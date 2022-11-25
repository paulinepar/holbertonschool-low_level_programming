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
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->array = calloc(16400, sizeof(hash_node_t));
	if (new->array == NULL)
		return (NULL);


	new->size = size;
	return (new);
}
