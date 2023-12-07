#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * sum_dlistint - Sums all the n in the list
 * @head: A pointer to the first element of the list
 *
 * Return: The sum, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int res = 0;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp)
	{
		res += temp->n;
		temp = temp->next;
	}

	return (res);
}
