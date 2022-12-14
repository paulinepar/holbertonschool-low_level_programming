#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - add node
 * @head: double point
 * @str: const char point
 * Return: p
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *p = malloc(sizeof(list_t));

	if (p == NULL)
		return (NULL);

	p->str = strdup(str);
	p->len = strlen(str);
	p->next = *head;
	*head = p;

	return (p);
}
