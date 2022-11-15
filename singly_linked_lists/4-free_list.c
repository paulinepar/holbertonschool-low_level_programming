#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * free_list - free list_t
 * @head: pointer
 *
 * Return: 0
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		free(head->next);
		free(head->str);
		free(head);
	}
}
