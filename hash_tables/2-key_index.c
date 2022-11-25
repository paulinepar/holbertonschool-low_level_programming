#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - function that give index
 * @key: const unsigned char
 * @size: unsigned long int
 * Return: n
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
