#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delete the head note
 * @head: double pointer
 * Return: n
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp = *head;

	if (!tmp)
	{
		return (0);
	}

	else
	{
	i = (*head)->n;
	*head = tmp->next;
	}

	free(tmp);
	return (i);
}
