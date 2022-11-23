#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - return the sum of data
 * @head: double pointer
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;


	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
