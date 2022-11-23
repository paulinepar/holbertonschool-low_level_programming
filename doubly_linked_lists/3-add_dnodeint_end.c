#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_dnodeint_end - add node at end
 * @head: double pointer
 * @n: const int
 * Return: p
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *p;
	dlistint_t *tmp;

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{

		p->n = n;
		if ((*head) == NULL)
		{
			p->next = NULL;
			p->prev = NULL;
			(*head) = p;
		}
		else
		{
			tmp = (*head);
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = p;
			p->prev = tmp;
			p->next = NULL;
		}
	}
	return (p);
}
