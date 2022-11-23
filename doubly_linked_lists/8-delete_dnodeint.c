#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the head note
 * @head: double pointer
 * @index: unsigned int
 * Return: n
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (!tmp)
	{
		return (0);
	}

	else
	{
		index = (*head)->n;
		*head = tmp->next;
	}

	free(tmp);
	return (index);
}
