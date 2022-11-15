#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - print list
 * @h: pointer const
 * Return: d
 */

size_t list_len(const list_t *h)
{
	int d = 0;

	for (d = 0; h != NULL; d++)
	{
		h = h->next;
	}
	return (d);
}
