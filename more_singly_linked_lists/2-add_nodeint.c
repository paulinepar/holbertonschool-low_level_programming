#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add new node
 * @n: pointer const int
 * @head: double pointer
 * Return: n
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	p->n = n;
	p->next = *head;
	*head = p;

	return (p);
}
