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

	if (head == NULL)
		return (NULL);

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = *head;
	*head = p;

	return (p);
}
