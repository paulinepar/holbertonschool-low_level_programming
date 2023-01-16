#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node
 * @head: double pointer
 * @index: unsigned int
 * Return: head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int n;


	for (n = 0 ; n < index; n++)
	{
		if (head->next == NULL)
		{
		return (NULL);
		}
		head = head->next;
	}
	return (head);
}
