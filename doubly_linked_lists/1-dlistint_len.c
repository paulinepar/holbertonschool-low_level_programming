#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - print list
 * @h: pointer const
 * Return: n
 */

size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	for (n = 0; h != NULL; n++)
		h = h->next;

	return (n);
}
