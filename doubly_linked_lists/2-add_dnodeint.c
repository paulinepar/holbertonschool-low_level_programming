#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add node int
 * @head: double pointer
 * @n: const int
 * Return: p
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p;

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
		return (NULL);


	p->n = n;
	p->next = *head;
	p->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = p;

	(*head) = p;
	return (p);
}
