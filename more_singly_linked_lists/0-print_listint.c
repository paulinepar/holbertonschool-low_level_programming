#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print list
 * @h: pointer const
 * Return: d
 */

size_t print_listint(const listint_t *h)
{
	int n = 0;

	for (n = 0; h != NULL; n++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
