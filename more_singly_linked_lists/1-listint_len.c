#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print list
 * @h: pointer const
 * Return: n
 */

size_t listint_len(const listint_t *h)
{
	int n = 0;

	for (n = 0; h != NULL; n++)
	{
		h = h->next;
	}
	return (n);
}
