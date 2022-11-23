#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add node int
 * @h: pointer const
 * @n: const int
 * Return: n
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p;

	if (head == NULL)
		return (NULL);

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	p->n = n;
	p->next = *head;
	p->prev = *head;
	*head = p;

	return (p);
}
