#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Insert a node at a given position
 * @h: A pointer to the first node
 * @idx: The index to insert at
 * @n: The integer to insert
 *
 * Return: The address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp;
	unsigned int index = 0;

	if (!new)
		return (NULL);

	new->n = n;
	temp = *h;

	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;

		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (temp && index < idx - 1)
	{
		index++;
		temp = temp->next;
	}

	if (!temp)
	{
		free(new);
		return (NULL);
	}

	new->next = temp->next;
	new->prev = temp;

	if (temp->next)
		temp->next->prev = new;
	temp->next = new;

	return (new);
}
