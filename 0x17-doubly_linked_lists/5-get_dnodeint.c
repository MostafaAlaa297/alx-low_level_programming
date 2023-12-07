#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * get_dnodeint_at_index - Get the node at the nth place
 * @head: A pointer to the first node
 * @index: The index of the node to return
 *
 * Return: The nth node of the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (counter == index)
			return (temp);

		counter++;
		temp = temp->next;
	}

	return (temp);
}
