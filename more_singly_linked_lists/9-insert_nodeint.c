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

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *new;
	listint_t *tmp;
	unsigned int i = 0;



	if (*head == NULL)
		return (NULL);

	tmp = *head;

	while (tmp != NULL)
	{
		if (i == idx - 1)
		{
			new = malloc(sizeof(listint_t));

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
