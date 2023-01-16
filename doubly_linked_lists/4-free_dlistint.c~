#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free list
 * @head: double pointer
 * Return: 0
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}

	free_listint(head->next);
	free(head);
}
