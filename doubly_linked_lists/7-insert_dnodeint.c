#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer
 * @idx: index
 * @n: number
 * Return: sum
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *new;
	dlistint_t *tmp;
	unsigned int i = 0;

	if (*h == NULL)
		return (NULL);

	tmp = *h;

	while (tmp != NULL)
	{
		if (i == idx - 1)
		{
			new = malloc(sizeof(dlistint_t));

			if (new == NULL)
			{
				return (NULL);
			}
			else
			{
				new->n = n;
				new->next = tmp->next;
				tmp->next = new;
				return (new);
			}
		}
		if (tmp->next != NULL)
			tmp = tmp->next;
		i++;
	}
	return (NULL);
}
