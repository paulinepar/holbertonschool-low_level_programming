#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print list
 * @h: pointer const
 * Return: d
 */

size_t print_list(const list_t *h)
{
	int d = 0;

	for (d = 0; h != NULL; d++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (d);
}
