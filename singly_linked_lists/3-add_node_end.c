#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - add node at the end
 * @head: double point
 * @str: const char point
 * Return: p
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p;
	list_t *tmp;

	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);

	p->str = strdup(str);
	p->len = strlen(str);
	p->next = NULL;

	if (*head == NULL)
	{
		*head = p;
	}
	else
		tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = p;

	return (p);
}
