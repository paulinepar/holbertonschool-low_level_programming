#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free list
 * @head: double pointer
 * Return: 0
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}

	free_dlistint(head->next);
	free(head);
}
