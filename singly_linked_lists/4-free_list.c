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
		free(head);
	if (head->next != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
